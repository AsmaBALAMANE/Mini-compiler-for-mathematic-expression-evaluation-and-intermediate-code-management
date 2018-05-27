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
# tp2l.v
# Lex verbose file generated from tp2l.l.
# 
# Date: 02/03/18
# Time: 16:58:39
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [0-9]+|[0-9]*\.[0-9]++

    2  somme

    3  moyenne

    4  min

    5  max

    6  variance

    7  ecrType

    8  si

    9  produit

   10  produi

   11  some

   12  Min

   13  Max

   14  varianc

   15  ecartype

   16  moyene

   17  .|\n


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x2d (46)   goto 3
	0x2e               goto 4
	0x2f               goto 3
	0x30 - 0x39 (10)   goto 5
	0x3a - 0x4c (19)   goto 3
	0x4d               goto 6
	0x4e - 0x64 (23)   goto 3
	0x65               goto 7
	0x66 - 0x6c (7)    goto 3
	0x6d               goto 8
	0x6e - 0x6f (2)    goto 3
	0x70               goto 9
	0x71 - 0x72 (2)    goto 3
	0x73               goto 10
	0x74 - 0x75 (2)    goto 3
	0x76               goto 11
	0x77 - 0xff (137)  goto 3


state 2
	^INITIAL

	0x00 - 0x2d (46)   goto 3
	0x2e               goto 4
	0x2f               goto 3
	0x30 - 0x39 (10)   goto 5
	0x3a - 0x4c (19)   goto 3
	0x4d               goto 6
	0x4e - 0x64 (23)   goto 3
	0x65               goto 7
	0x66 - 0x6c (7)    goto 3
	0x6d               goto 8
	0x6e - 0x6f (2)    goto 3
	0x70               goto 9
	0x71 - 0x72 (2)    goto 3
	0x73               goto 10
	0x74 - 0x75 (2)    goto 3
	0x76               goto 11
	0x77 - 0xff (137)  goto 3


state 3
	match 17


state 4
	0x30 - 0x39 (10)   goto 12

	match 17


state 5
	0x2e               goto 13
	0x30 - 0x39 (10)   goto 5

	match 1


state 6
	0x61               goto 14
	0x69               goto 15

	match 17


state 7
	0x63               goto 16

	match 17


state 8
	0x61               goto 17
	0x69               goto 18
	0x6f               goto 19

	match 17


state 9
	0x72               goto 20

	match 17


state 10
	0x69               goto 21
	0x6f               goto 22

	match 17


state 11
	0x61               goto 23

	match 17


state 12
	0x30 - 0x39 (10)   goto 12

	match 1


state 13
	0x30 - 0x39 (10)   goto 12


state 14
	0x78               goto 24


state 15
	0x6e               goto 25


state 16
	0x61               goto 26
	0x72               goto 27


state 17
	0x78               goto 28


state 18
	0x6e               goto 29


state 19
	0x79               goto 30


state 20
	0x6f               goto 31


state 21
	match 8


state 22
	0x6d               goto 32


state 23
	0x72               goto 33


state 24
	match 13


state 25
	match 12


state 26
	0x72               goto 34


state 27
	0x54               goto 35


state 28
	match 5


state 29
	match 4


state 30
	0x65               goto 36


state 31
	0x64               goto 37


state 32
	0x65               goto 38
	0x6d               goto 39


state 33
	0x69               goto 40


state 34
	0x74               goto 41


state 35
	0x79               goto 42


state 36
	0x6e               goto 43


state 37
	0x75               goto 44


state 38
	match 11


state 39
	0x65               goto 45


state 40
	0x61               goto 46


state 41
	0x79               goto 47


state 42
	0x70               goto 48


state 43
	0x65               goto 49
	0x6e               goto 50


state 44
	0x69               goto 51


state 45
	match 2


state 46
	0x6e               goto 52


state 47
	0x70               goto 53


state 48
	0x65               goto 54


state 49
	match 16


state 50
	0x65               goto 55


state 51
	0x74               goto 56

	match 10


state 52
	0x63               goto 57


state 53
	0x65               goto 58


state 54
	match 7


state 55
	match 3


state 56
	match 9


state 57
	0x65               goto 59

	match 14


state 58
	match 15


state 59
	match 6


#############################################################################
# Summary
#############################################################################

1 start state(s)
17 expression(s), 59 state(s)


#############################################################################
# End of File
#############################################################################
