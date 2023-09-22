section .data
    hello db "Hello, Holberton", 0       ; Null-terminated string

section .text
    global main
    extern printf

main:
    push rbp                            ; Save base pointer
    mov rdi, hello                     ; Load address of the string
    call printf                        ; Call printf
    pop rbp                             ; Restore base pointer

    ; Exit the program
    mov rax, 60                         ; syscall: exit
    xor rdi, rdi                        ; status: 0
    syscall
