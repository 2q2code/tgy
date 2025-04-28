; fixes the macro problem in make all, for all
; just be sure to include this fix in all targets
; that dont use LED macros
.MACRO RED_on
.ENDMACRO
.MACRO RED_off
.ENDMACRO
.MACRO GRN_on
.ENDMACRO
.MACRO GRN_off
.ENDMACRO