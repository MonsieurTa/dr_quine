extern exit
extern printf

section .data
s db "extern exit%1$cextern printf%1$c%1$csection .data%1$cs db %2$c%3$s%2$c, 0%1$c%1$csection .text%1$c  global _start%1$c%1$c_start:%1$c  mov rdi, s    ; prepare fmt string for printf%1$c  mov rsi, 0xa  ; newline%1$c  mov rdx, 0x22 ; double quotes%1$c  mov rcx, s%1$c  call printf wrt ..plt%1$c%1$c  call exit%1$c", 0

section .text
  global _start

_start:
  mov rdi, s    ; prepare fmt string for printf
  mov rsi, 0xa  ; newline
  mov rdx, 0x22 ; double quotes
  mov rcx, s
  call printf wrt ..plt

  call exit
