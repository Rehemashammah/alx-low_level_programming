section .data
    format db "Hello, Holberton", 10, 0

section .text
    global _start
    extern printf

_start:
    ; Call printf
    mov     rdi, format
    mov     rax, 0
    call    printf

    ; Exit the program
    mov     rax, 60         ; syscall: exit
    xor     rdi, rdi        ; status: 0
    syscall

