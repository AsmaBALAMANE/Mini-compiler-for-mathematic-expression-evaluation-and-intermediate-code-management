#############################################################################
#                         A C A D E M I C   C O P Y
# 
# This file was produced by an ACADEMIC COPY of Parser Generator. It is for
# use in non-commercial software only. An ACADEMIC COPY of Parser Generator
# can only be used by a student, or a member of an academic community. If
# however you want to use Parser Generator for commercial purposes then you
# will need to purchase a license. For more information see the online help or
# go to the Bumble-Bee Software homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# tp.v
# YACC verbose file generated from tp.y.
# 
# Date: 02/03/18
# Time: 21:59:37
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : Ligne $end

    1  Ligne : E '\n'

    2  E : E '+' E
    3    | E '-' E
    4    | E '*' E
    5    | E '/' E
    6    | E '^' E
    7    | '(' E ')'
    8    | '-' E
    9    | chiffre
   10    | Fonct
   11    | E '>' E
   12    | E '<' E
   13    | E '=' E

   14  Fonct : NomFunction '(' L ')'
   15        | NomFunction '(' L
   16        | NomFunction L ')'

   17  NomFunction : nf

   18  L : L ',' E
   19    | E


##############################################################################
# States
##############################################################################

state 0
	$accept : . Ligne $end

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 6
	Fonct  goto 7
	Ligne  goto 8


state 1
	E : '(' . E ')'

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 9
	Fonct  goto 7


state 2
	E : '-' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 10
	Fonct  goto 7


state 3
	E : chiffre .  (9)

	.  reduce 9


state 4
	NomFunction : nf .  (17)

	.  reduce 17


state 5
	Fonct : NomFunction . '(' L ')'
	Fonct : NomFunction . '(' L
	Fonct : NomFunction . L ')'

	'('  shift 11
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	L  goto 12
	NomFunction  goto 5
	E  goto 13
	Fonct  goto 7


state 6
	Ligne : E . '\n'
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	'\n'  shift 14
	'*'  shift 15
	'+'  shift 16
	'-'  shift 17
	'/'  shift 18
	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22


state 7
	E : Fonct .  (10)

	.  reduce 10


state 8
	$accept : Ligne . $end  (0)

	$end  accept


state 9
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : '(' E . ')'
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	')'  shift 23
	'*'  shift 15
	'+'  shift 16
	'-'  shift 17
	'/'  shift 18
	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22


state 10
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : '-' E .  (8)
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	.  reduce 8


state 11
	E : '(' . E ')'
	Fonct : NomFunction '(' . L ')'
	Fonct : NomFunction '(' . L

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	L  goto 24
	NomFunction  goto 5
	E  goto 25
	Fonct  goto 7


state 12
	Fonct : NomFunction L . ')'
	L : L . ',' E

	')'  shift 26
	','  shift 27


state 13
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E
	L : E .  (19)

	'*'  shift 15
	'+'  shift 16
	'-'  shift 17
	'/'  shift 18
	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22
	.  reduce 19


state 14
	Ligne : E '\n' .  (1)

	.  reduce 1


state 15
	E : E '*' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 28
	Fonct  goto 7


state 16
	E : E '+' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 29
	Fonct  goto 7


state 17
	E : E '-' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 30
	Fonct  goto 7


state 18
	E : E '/' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 31
	Fonct  goto 7


state 19
	E : E '<' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 32
	Fonct  goto 7


state 20
	E : E '=' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 33
	Fonct  goto 7


state 21
	E : E '>' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 34
	Fonct  goto 7


state 22
	E : E '^' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 35
	Fonct  goto 7


state 23
	E : '(' E ')' .  (7)

	.  reduce 7


24: shift-reduce conflict (shift 36, reduce 15) on ')'
24: shift-reduce conflict (shift 27, reduce 15) on ','
state 24
	Fonct : NomFunction '(' L . ')'
	Fonct : NomFunction '(' L .  (15)
	L : L . ',' E

	')'  shift 36
	','  shift 27
	.  reduce 15


25: shift-reduce conflict (shift 23, reduce 19) on ')'
25: shift-reduce conflict (shift 15, reduce 19) on '*'
25: shift-reduce conflict (shift 16, reduce 19) on '+'
25: shift-reduce conflict (shift 17, reduce 19) on '-'
25: shift-reduce conflict (shift 18, reduce 19) on '/'
25: shift-reduce conflict (shift 19, reduce 19) on '<'
25: shift-reduce conflict (shift 20, reduce 19) on '='
25: shift-reduce conflict (shift 21, reduce 19) on '>'
25: shift-reduce conflict (shift 22, reduce 19) on '^'
state 25
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : '(' E . ')'
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E
	L : E .  (19)

	')'  shift 23
	'*'  shift 15
	'+'  shift 16
	'-'  shift 17
	'/'  shift 18
	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22
	.  reduce 19


state 26
	Fonct : NomFunction L ')' .  (16)

	.  reduce 16


state 27
	L : L ',' . E

	'('  shift 1
	'-'  shift 2
	chiffre  shift 3
	nf  shift 4

	NomFunction  goto 5
	E  goto 37
	Fonct  goto 7


state 28
	E : E . '+' E
	E : E . '-' E
	E : E '*' E .  (4)
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22
	.  reduce 4


state 29
	E : E '+' E .  (2)
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	'*'  shift 15
	'/'  shift 18
	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22
	.  reduce 2


state 30
	E : E . '+' E
	E : E '-' E .  (3)
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	'*'  shift 15
	'/'  shift 18
	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22
	.  reduce 3


state 31
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E '/' E .  (5)
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22
	.  reduce 5


state 32
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E '<' E .  (12)
	E : E . '<' E
	E : E . '=' E

	'^'  shift 22
	.  reduce 12


state 33
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E '=' E .  (13)
	E : E . '=' E

	'^'  shift 22
	.  reduce 13


state 34
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E '>' E .  (11)
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	'^'  shift 22
	.  reduce 11


state 35
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E '^' E .  (6)
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E

	'^'  shift 22
	.  reduce 6


state 36
	Fonct : NomFunction '(' L ')' .  (14)

	.  reduce 14


37: shift-reduce conflict (shift 15, reduce 18) on '*'
37: shift-reduce conflict (shift 16, reduce 18) on '+'
37: shift-reduce conflict (shift 17, reduce 18) on '-'
37: shift-reduce conflict (shift 18, reduce 18) on '/'
37: shift-reduce conflict (shift 19, reduce 18) on '<'
37: shift-reduce conflict (shift 20, reduce 18) on '='
37: shift-reduce conflict (shift 21, reduce 18) on '>'
37: shift-reduce conflict (shift 22, reduce 18) on '^'
state 37
	E : E . '+' E
	E : E . '-' E
	E : E . '*' E
	E : E . '/' E
	E : E . '^' E
	E : E . '>' E
	E : E . '<' E
	E : E . '=' E
	L : L ',' E .  (18)

	'*'  shift 15
	'+'  shift 16
	'-'  shift 17
	'/'  shift 18
	'<'  shift 19
	'='  shift 20
	'>'  shift 21
	'^'  shift 22
	.  reduce 18


##############################################################################
# Summary
##############################################################################

State 24 contains 2 shift-reduce conflict(s)
State 25 contains 9 shift-reduce conflict(s)
State 37 contains 8 shift-reduce conflict(s)


17 token(s), 6 nonterminal(s)
20 grammar rule(s), 38 state(s)


##############################################################################
# End of File
##############################################################################
