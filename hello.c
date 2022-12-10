//HERC01GC JOB (SETUP),
//            'Hello World',
//            CLASS=A,
//            MSGCLASS=H,
//            REGION=4096K,
//            MSGLEVEL=(1,1),
//            NOTIFY=HERC01
//********************************************************************
//*
//* Name: HERC01.SOURCE.GCC(HELLO)
//*
//* Desc: Hello World in C             o
//*
//********************************************************************
//*
//S1      EXEC GCCCLG,COPTS='-v'
//COMP.SYSIN DD *
#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Hello World!");
   return 0;
}
/*
//
