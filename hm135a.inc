;***********************************************************
;* Hacker/Jeti Master 135-O-F5B with all FETs on PORTD     *
;* Same pinout as Pulso Advance Plus DLU40A but at 12MHz   *
;***********************************************************

#include "macro_fix.inc"

.equ	F_CPU		= 12000000
.equ	USE_INT0	= 2
.equ	USE_I2C		= 0
.equ	USE_UART	= 0
.equ	USE_ICP		= 0

;*********************
; PORT D definitions *
;*********************
.equ	ApFET		= 7	;o
.equ	c_comp		= 6	;i common comparator input (AIN0)
.equ	AnFET		= 5	;o
.equ	BnFET		= 4	;o
.equ	BpFET		= 3	;o
.equ	rcp_in		= 2	;i r/c pulse input, opto-coupled, maybe needs pull-up
.equ	CpFET		= 1	;o
.equ	CnFET		= 0	;o

.equ	INIT_PD		= (1<<AnFET)+(1<<BnFET)+(1<<CnFET)+(1<<rcp_in)
.equ	DIR_PD		= (1<<ApFET)+(1<<BpFET)+(1<<CpFET)+(1<<AnFET)+(1<<BnFET)+(1<<CnFET)

.equ	ApFET_port	= PORTD
.equ	BpFET_port	= PORTD
.equ	CpFET_port	= PORTD
.equ	AnFET_port	= PORTD
.equ	BnFET_port	= PORTD
.equ	CnFET_port	= PORTD

;*********************
; PORT C definitions *
;*********************
.equ	mux_voltage	= 7	; ADC7 voltage input (47k from Vbat, 2.0k to gnd, 14.7V in -> .598V at ADC7)
;.equ			= 6	; ADC6
;.equ			= 5	; ADC5
.equ	mux_c		= 4	; ADC4 phase input
.equ	mux_b		= 3	; ADC3 phase input
.equ	mux_a		= 2	; ADC2 phase input
;.equ			= 1	; ADC1
;.equ			= 0	; ADC0

.equ	O_POWER		= 47
.equ	O_GROUND	= 2

.equ	INIT_PC		= 0
.equ	DIR_PC		= 0

;*********************
; PORT B definitions *
;*********************
;.equ			= 7
;.equ			= 6
;.equ			= 5	(sck stk200 interface)
;.equ			= 4	(miso stk200 interface)
;.equ			= 3	(mosi stk200 interface)
;.equ			= 2
;.equ			= 1
;.equ			= 0

.equ	INIT_PB		= 0
.equ	DIR_PB		= 0
