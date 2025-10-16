; hello.asm  (Worksheet 0)

section .data
    msg db "Hello from Assembly!", 10      ; 10 = newline
    len equ $ - msg

section .text
    global _start

_start:
    ; write(1, msg, len)
    mov eax, 4          ; sys_write
    mov ebx, 1          ; stdout
    mov ecx, msg
    mov edx, len
    int 0x80

    ; exit(0)
    mov eax, 1          ; sys_exit
    xor ebx, ebx
    int 0x80
