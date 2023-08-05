	.file	"Program2.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC2:
	.string	"%p\n"
.LC3:
	.string	"%d\n"
.LC4:
	.string	"%f\n"
.LC5:
	.string	"%c\n"
.LC6:
	.string	"%lf\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB23:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	leaq	.LC2(%rip), %rsi
	movl	$1, %edi
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$40, %rsp
	.cfi_def_cfa_offset 64
	movq	x@GOTPCREL(%rip), %rbp
	movq	%fs:40, %rax
	movq	%rax, 24(%rsp)
	xorl	%eax, %eax
	movq	.LC1(%rip), %rax
	movl	$0x41a40000, 12(%rsp)
	movq	%rbp, %rdx
	movq	%rax, 16(%rsp)
	xorl	%eax, %eax
	call	__printf_chk@PLT
	leaq	12(%rsp), %rdx
	leaq	.LC2(%rip), %rsi
	xorl	%eax, %eax
	movl	$1, %edi
	call	__printf_chk@PLT
	movq	ch@GOTPCREL(%rip), %rbx
	leaq	.LC2(%rip), %rsi
	xorl	%eax, %eax
	movl	$1, %edi
	movq	%rbx, %rdx
	call	__printf_chk@PLT
	leaq	16(%rsp), %rdx
	leaq	.LC2(%rip), %rsi
	xorl	%eax, %eax
	movl	$1, %edi
	call	__printf_chk@PLT
	movl	0(%rbp), %edx
	movl	$1, %edi
	xorl	%eax, %eax
	leaq	.LC3(%rip), %rsi
	call	__printf_chk@PLT
	leaq	.LC4(%rip), %rsi
	movl	$1, %edi
	pxor	%xmm0, %xmm0
	movl	$1, %eax
	cvtss2sd	12(%rsp), %xmm0
	call	__printf_chk@PLT
	movsbl	(%rbx), %edx
	movl	$1, %edi
	xorl	%eax, %eax
	leaq	.LC5(%rip), %rsi
	call	__printf_chk@PLT
	movsd	16(%rsp), %xmm0
	movl	$1, %edi
	leaq	.LC6(%rip), %rsi
	movl	$1, %eax
	call	__printf_chk@PLT
	movq	24(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L5
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
.L5:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE23:
	.size	main, .-main
	.globl	ch
	.data
	.type	ch, @object
	.size	ch, 1
ch:
	.byte	65
	.globl	x
	.align 4
	.type	x, @object
	.size	x, 4
x:
	.long	10
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC1:
	.long	1030792151
	.long	1077987082
	.ident	"GCC: (GNU) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
