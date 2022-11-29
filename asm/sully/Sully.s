extern sprintf
extern dprintf
extern system
section .data
fd db qword 0
i db qword 5
f db "./Sully_%d.s", 0
cc db "nasm -felf64 %1$s && ld --dynamic-linker=/lib64/ld-linux-x86-64.so.2 -o ./Sully_%2$d -lc ./Sully_%2$d.o && ./Sully_%2$d", 0
r db "extern sprintf%1$cextern dprintf%1$cextern system%1$csection .data%1$cfd db qword 0%1$ci db qword %6$d%1$cf db %2$c%3$s%2$c, 0%1$ccc db %2$c%4$s%2$c, 0%1$cr db %2$c%5$s%2$c, 0%1$csection .text%1$cglobal _start%1$c_start:%1$ccmp qword [i], 0x0%1$cjl exit%1$cpush rbp%1$cmov rbp, rsp%1$csub rsp, 0x108%1$clea rdi, [rbp-0x104]%1$cmov rsi, f%1$cmov rdx, [i]%1$ccall sprintf wrt ..plt%1$cmov [rbp-0x108], eax%1$clea rdi, [rbp-0x104]%1$cmov rsi, 1101o%1$cmov rdx, 666o%1$cmov rax, 0x2%1$csyscall%1$cmov [fd], rax%1$cmov rdi, [fd]%1$cmov rsi, r%1$cmov rdx, 0xa%1$cmov rcx, 0x22%1$cmov r8, f%1$cmov r9, cc%1$cmov rax, [i]%1$cdec rax%1$cpush rax%1$cpush r%1$ccall dprintf wrt ..plt%1$cmov rdi, [fd]%1$cmov rax, 0x3%1$csyscall%1$c; preparing compilation and execution%1$cmov eax, [rbp-0x108]%1$clea rdi, [rbp-0x104+rax+1]%1$cmov rsi, cc%1$clea rdx, [rbp-0x104]%1$cmov rcx, [i]%1$ccall sprintf wrt ..plt%1$cmov eax, [rbp-0x108]%1$clea rdi, [rbp-0x104+rax+1]%1$ccall system wrt ..plt%1$cmov rsp, rbp%1$cpop rbp%1$cjmp exit%1$cexit:%1$cmov rax, 0x3c%1$csyscall%1$c", 0
section .text
global _start
_start:
cmp qword [i], 0x0
jl exit
push rbp
mov rbp, rsp
sub rsp, 0x108
lea rdi, [rbp-0x104]
mov rsi, f
mov rdx, [i]
call sprintf wrt ..plt
mov [rbp-0x108], eax
lea rdi, [rbp-0x104]
mov rsi, 1101o
mov rdx, 666o
mov rax, 0x2
syscall
mov [fd], rax
mov rdi, [fd]
mov rsi, r
mov rdx, 0xa
mov rcx, 0x22
mov r8, f
mov r9, cc
mov rax, [i]
dec rax
push rax
push r
call dprintf wrt ..plt
mov rdi, [fd]
mov rax, 0x3
syscall
; preparing compilation and execution
mov eax, [rbp-0x108]
lea rdi, [rbp-0x104+rax+1]
mov rsi, cc
lea rdx, [rbp-0x104]
mov rcx, [i]
call sprintf wrt ..plt
mov eax, [rbp-0x108]
lea rdi, [rbp-0x104+rax+1]
call system wrt ..plt
mov rsp, rbp
pop rbp
jmp exit
exit:
mov rax, 0x3c
syscall
