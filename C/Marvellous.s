	.file	"Marvellous.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Inside main function\0"
LC2:
	.ascii "Rate of Interest is %f\12\0"
LC3:
	.ascii "Fees of upcoming batch is %d\12\0"
LC4:
	.ascii "Size of Demo structure is %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_puts
	fldl	LC1
	fstpl	4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$20000, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$8, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
	.align 8
LC1:
	.long	1717986918
	.long	1075603046
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
