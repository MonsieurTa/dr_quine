extern dprintf
section .data
fd db 0
f db "Grace_kid.s",0
s db "extern dprintf%1$csection .data%1$cfd db 0%1$cf db %2$cGrace_kid.s%2$c,0%1$cs db %2$c%3$s%2$c,0%1$csection .text%1$cglobal _start%1$c;comment%1$c_start:%1$cmov rdi, f%1$cmov rsi, 01101o%1$cmov rdx, 0666o%1$cmov rax, 0x2%1$csyscall%1$cmov [fd], rax%1$cmov rdi, [fd]%1$cmov rsi, s%1$cmov rdx, 0xa%1$cmov rcx, 0x22%1$cmov r8, s%1$ccall dprintf%1$cmov rdi, [fd]%1$cmov rax, 0x3%1$csyscall%1$cmov rax, 0x3c%1$csyscall%1$c",0
section .text
global _start
;comment
_start:
mov rdi, f
mov rsi, 01101o
mov rdx, 0666o
mov rax, 0x2
syscall
mov [fd], rax
mov rdi, [fd]
mov rsi, s
mov rdx, 0xa
mov rcx, 0x22
mov r8, s
call dprintf
mov rdi, [fd]
mov rax, 0x3
syscall
mov rax, 0x3c
syscall
