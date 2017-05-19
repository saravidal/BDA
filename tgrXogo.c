
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[11];
};
static struct sqlcxp sqlfpn =
{
    10,
    "tgrXogo.pc"
};


static unsigned int sqlctx = 82019;


static struct sqlexd {
   unsigned long  sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
            short *cud;
   unsigned char  *sqlest;
            char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
            int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
   unsigned char  *sqhstv[8];
   unsigned long  sqhstl[8];
            int   sqhsts[8];
            short *sqindv[8];
            int   sqinds[8];
   unsigned long  sqharm[8];
   unsigned long  *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {13,8};

/* SQLLIB Prototypes */
extern sqlcxt (/*_ void **, unsigned int *,
                   struct sqlexd *, struct sqlcxp * _*/);
extern sqlcx2t(/*_ void **, unsigned int *,
                   struct sqlexd *, struct sqlcxp * _*/);
extern sqlbuft(/*_ void **, char * _*/);
extern sqlgs2t(/*_ void **, char * _*/);
extern sqlorat(/*_ void **, unsigned int *, void * _*/);

/* Forms Interface */
static int IAPSUCC = 0;
static int IAPFAIL = 1403;
static int IAPFTL  = 535;
extern void sqliem(/*_ unsigned char *, signed int * _*/);

 static char *sq0023 = 
"SELECT codCritic , tituloCritic , ( SELECT nome FROM autor WHERE idAutor = \
c . autor ) , puntuacion FROM critica c WHERE xogo = :b0            ";

 static char *sq0026 = 
"SELECT codCritic , tituloCritic , ( SELECT tituloXogo FROM xogo WHERE codXo\
go = c . xogo ) , puntuacion FROM critica c WHERE autor = :b0            ";

 static char *sq0032 = 
"SELECT codXogo , tituloXogo , TO_CHAR ( dataDeSaida , 'dd/mm/yyyy' ) , voto\
sPositivos , votosNegativos , nvl ( ( SELECT AVG ( puntuacion ) FROM critica \
WHERE xogo = x . codXogo ) , 0 ) FROM xogo x WHERE tituloXogo LIKE :b0       \
     ";

 static char *sq0035 = 
"SELECT idAutor , nome , enlace , tipo FROM autor WHERE nome LIKE :b0       \
     ";

 static char *sq0038 = 
"SELECT codXogo , tituloXogo , TO_CHAR ( dataDeSaida , 'dd/mm/yyyy' ) , voto\
sPositivos , votosNegativos , nvl ( ( SELECT AVG ( puntuacion ) FROM critica \
WHERE xogo = x . codXogo ) , 0 ) FROM xogo x            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* CUD (Compilation Unit Data) Array */
static short sqlcud0[] =
{13,4130,873,0,0,
5,0,0,1,0,0,31,155,0,0,0,0,0,1,0,
20,0,0,0,0,0,27,181,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,0,0,30,189,0,0,0,0,0,1,0,
66,0,0,4,46,0,1,218,0,0,0,0,0,1,0,
81,0,0,5,86,0,3,245,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
112,0,0,6,0,0,29,250,0,0,0,0,0,1,0,
127,0,0,7,46,0,1,286,0,0,0,0,0,1,0,
142,0,0,8,130,0,3,314,0,0,6,6,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,
1,97,0,0,
181,0,0,9,0,0,29,318,0,0,0,0,0,1,0,
196,0,0,10,46,0,1,351,0,0,0,0,0,1,0,
211,0,0,11,113,0,3,370,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
242,0,0,12,0,0,29,374,0,0,0,0,0,1,0,
257,0,0,13,46,0,1,397,0,0,0,0,0,1,0,
272,0,0,14,38,0,2,403,0,0,1,1,0,1,0,1,97,0,0,
291,0,0,15,0,0,29,412,0,0,0,0,0,1,0,
306,0,0,16,46,0,1,432,0,0,0,0,0,1,0,
321,0,0,17,37,0,2,438,0,0,1,1,0,1,0,1,3,0,0,
340,0,0,18,0,0,29,447,0,0,0,0,0,1,0,
355,0,0,19,25,0,1,481,0,0,0,0,0,1,0,
370,0,0,20,291,0,4,483,0,0,8,1,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,3,0,
0,2,97,0,0,2,97,0,0,1,3,0,0,
417,0,0,21,0,0,29,505,0,0,0,0,0,1,0,
432,0,0,22,25,0,1,534,0,0,0,0,0,1,0,
447,0,0,23,143,0,9,541,0,0,1,1,0,1,0,1,3,0,0,
466,0,0,23,0,0,13,547,0,0,4,0,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,
497,0,0,23,0,0,15,565,0,0,0,0,0,1,0,
512,0,0,24,0,0,29,568,0,0,0,0,0,1,0,
527,0,0,25,25,0,1,612,0,0,0,0,0,1,0,
542,0,0,26,148,0,9,619,0,0,1,1,0,1,0,1,97,0,0,
561,0,0,26,0,0,13,625,0,0,4,0,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,
592,0,0,26,0,0,15,643,0,0,0,0,0,1,0,
607,0,0,27,0,0,29,646,0,0,0,0,0,1,0,
622,0,0,28,25,0,1,688,0,0,0,0,0,1,0,
637,0,0,29,259,0,4,694,0,0,7,1,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
2,3,0,0,1,3,0,0,
680,0,0,30,0,0,29,714,0,0,0,0,0,1,0,
695,0,0,31,25,0,1,742,0,0,0,0,0,1,0,
710,0,0,32,234,0,9,760,0,0,1,1,0,1,0,1,97,0,0,
729,0,0,32,0,0,13,766,0,0,6,0,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
2,3,0,0,
768,0,0,32,0,0,15,787,0,0,0,0,0,1,0,
783,0,0,33,0,0,29,790,0,0,0,0,0,1,0,
798,0,0,34,25,0,1,829,0,0,0,0,0,1,0,
813,0,0,35,80,0,9,844,0,0,1,1,0,1,0,1,97,0,0,
832,0,0,35,0,0,13,850,0,0,4,0,0,1,0,2,9,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
863,0,0,35,0,0,15,869,0,0,0,0,0,1,0,
878,0,0,36,0,0,29,872,0,0,0,0,0,1,0,
893,0,0,37,25,0,1,913,0,0,0,0,0,1,0,
908,0,0,38,208,0,9,922,0,0,0,0,0,1,0,
923,0,0,38,0,0,13,928,0,0,6,0,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
2,3,0,0,
962,0,0,38,0,0,15,950,0,0,0,0,0,1,0,
977,0,0,39,0,0,29,952,0,0,0,0,0,1,0,
992,0,0,40,25,0,1,989,0,0,0,0,0,1,0,
1007,0,0,41,103,0,4,993,0,0,4,1,0,1,0,2,97,0,0,2,3,0,0,2,3,0,0,1,3,0,0,
1038,0,0,42,0,0,29,1003,0,0,0,0,0,1,0,
1053,0,0,43,44,0,1,1026,0,0,0,0,0,1,0,
1068,0,0,44,63,0,5,1037,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
1095,0,0,45,0,0,29,1042,0,0,0,0,0,1,0,
1110,0,0,46,44,0,1,1067,0,0,0,0,0,1,0,
1125,0,0,47,72,0,5,1073,0,0,1,1,0,1,0,1,3,0,0,
1144,0,0,48,0,0,29,1078,0,0,0,0,0,1,0,
1159,0,0,49,44,0,1,1104,0,0,0,0,0,1,0,
1174,0,0,50,72,0,5,1110,0,0,1,1,0,1,0,1,3,0,0,
1193,0,0,51,0,0,29,1115,0,0,0,0,0,1,0,
};


/*
 *
 *	 BASES DE DATOS AVANZADAS - TRABALLO TUTELADO
 *	APLICACIÓN PARA XESTIONAR UNHA BD DE VIDEOXOGOS
 *	
 * 	Autores:
 * 		Daniel López López (d.lopez.lopez@udc.es)
 * 		Sara Vidal García (sara.vidal@udc.es) 
 *	
 *	Grupo 1.1 - Curso 2016-17 
 *
 */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

/* EXEC SQL INCLUDE SQLCA;
 */ 
/*
 * $Header: sqlca.h 24-apr-2003.12:50:58 mkandarp Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:
 
    #define SQLCA_STORAGE_CLASS extern
 
  will define the SQLCA as an extern.
 
  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */



/* ______________________________________________________
 * 
 * Utilidades para menús e ler valores por teclado.  
 * ______________________________________________________
 */

#define MAXLEN 20

void getString(char *s, int maxlen){
	fgets(s,maxlen,stdin);
	int last = strlen(s) -1;
	if ( (s[last]=='\r') || (s[last]=='\n') )
		s[last] = '\0';
}


void getPassword(char *s, int maxlen){
	system("stty -echo");
	getString(s,maxlen);
	system("stty echo");
}


int getInt(){
	char s[MAXLEN];
	getString(s,MAXLEN);
	return atoi(s);
}


float getFloat(){
	char s[MAXLEN];
	getString(s,MAXLEN);
	return atof(s);
}



/* ______________________________________________________
 * 
 * Menú principal. 
 * ______________________________________________________
 */

int menu(){
	int opcion = -1;

	int MAXOPTS = 12; /* Número de opcións do menú */

	printf(" _____________________________ \n");
	printf("|                             |\n");
	printf("| Menu da aplicacion de xogos |\n");
	printf("|                             |\n");
	printf("|=============================|\n");
	printf("| 1. Listar Xogos             |\n");
	printf("| 2. Engadir Xogo             |\n");
	printf("| 3. Buscar Xogo              |\n");
	printf("| 4. Eliminar Xogo            |\n");
	printf("| 5. Engadir Autor            |\n");
	printf("| 6. Buscar Autor             |\n");
	printf("| 7. Editar Datos Autor       |\n");
	printf("| 8. Eliminar Autor           |\n");
	printf("| 9. Engadir Critica          |\n");
	printf("|10. Votar positivamente      |\n");
	printf("|11. Votar negativamente      |\n");
	printf("|_____________________________|\n");
	printf("|                             |\n");
	printf("| 0. Sair da aplicacion       |\n");
	printf("|_____________________________|\n\n");

	while ( (opcion < 0) || (opcion > MAXOPTS)){
		printf("OP> ");
		opcion=getInt();
	}
	return opcion;
}



/* ______________________________________________________
 * 
 * Funcións para a xestión de erros. 
 * ______________________________________________________
 */


void errorManagerConn(char *usr){
	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

	switch (sqlca.sqlcode){
		case -1017: printf("Credenciais de %s invalidas. Abortando conexion.\n\n", usr);
				break;
		case -1012: printf("Non estabas conectado. Saindo do programa.\n\n");
				break;
		default: printf("Estado: Codigo %d, Mensaxe: %.*s.\n",
				sqlca.sqlcode,
				sqlca.sqlerrm.sqlerrml,
				sqlca.sqlerrm.sqlerrmc);
	}
	exit(-1);
}


int errorManager(){
	int retval = sqlca.sqlcode; 
	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

	switch (sqlca.sqlcode){
		case -1: printf("\nERRO: O DNI/CIF xa existe na base de datos.\n\n"); 
				break;
		case -2290: printf("\nERRO: A puntuacion ten que ser un valor entre 0 e 100!\n\n");
				break;
		case -2291: printf("\nERRO: O codigo do xogo ou o identificador do autor e incorrecto.\n\n");
				break;
		case -1400: printf("\nERRO: Os campos marcados con * son de caracter obligatorio.\n\n"); 
				break;
		case -1407: printf("\nERRO: Os campos marcados con * son de caracter obligatorio.\n\n");
				break;
		case -1438: printf("\nERRO: Superouse o valor maximo permitido para a puntuacion da critica.\n\n");
				break;
		case -1480: printf("\nERRO: Sobrepasouse o numero maximo de caracteres permitidos.\n\n");
				break;
		case -1830: printf("\nERRO: A data introducida non cumple co formato solicitado.\n\n");
				break;
		case -1843: printf("\nERRO: O mes introducido non e valido.\n\n");
				break;
		case -1847: printf("\nERRO: O dia do mes debe estar entre 1 e o ultimo dia dese mes.\n\n");
				break;
		case -1861: printf("\ERRO: O dia non cumple co formato solicitado.\n\n");
				break;
		default: printf("\nERRO: Estado: Codigo %d, Mensaxe: %.*s.\n\n",
				sqlca.sqlcode,
				sqlca.sqlerrm.sqlerrml,
				sqlca.sqlerrm.sqlerrmc);
	}
	/* EXEC SQL ROLLBACK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	return retval;
}



/* ______________________________________________________
 * 
 * Conexión e desconexión á base de datos. 
 * ______________________________________________________
 */


void conectaBD(){
   	/* EXEC SQL WHENEVER SQLERROR DO errorManagerConn(usuario); */ 


   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		char usuario[30];
      		char clave[30];
   	/* EXEC SQL END DECLARE SECTION; */ 


   	printf("Introduce as tuas credenciais de Oracle:\n");  
   	printf("Usuario: "); getString(usuario,30);
   	printf("Clave: "); getPassword(clave,30);
   	printf("\n\nConectando con Oracle...\n");
   
   	/* EXEC SQL CONNECT :usuario IDENTIFIED BY :clave; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )20;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)usuario;
    sqlstm.sqhstl[0] = (unsigned long )30;
    sqlstm.sqhsts[0] = (         int  )30;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)clave;
    sqlstm.sqhstl[1] = (unsigned long )30;
    sqlstm.sqhsts[1] = (         int  )30;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) errorManagerConn(usuario);
}



	printf("\n\nConectado!\n\n");
}


void desconectaBD(){
   /* EXEC SQL WHENEVER SQLERROR DO errorManagerConn(""); */ 

   /* EXEC SQL COMMIT RELEASE; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )51;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) errorManagerConn("");
}


}



/* ______________________________________________________
 * 
 * Engadir un autor á base de datos.
 *
 * Nota: Se doCommit == 0, esta funcionalidade vai incluida
 * dentro da funcionalidade de engadir unha crítica.
 * ______________________________________________________
 */


void engadirAutor(int doCommit){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

   	
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int tipoxeral;
      		char id[25];
		char nome[50];
		char enlace[256];
		char tipo[30];
		int pausa;
   	/* EXEC SQL END DECLARE SECTION; */ 


	if(doCommit==1)
		/* EXEC SQL SET TRANSACTION ISOLATION LEVEL READ COMMITTED; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "set transaction ISOLATION LEVEL READ COMMITTED";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )66;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}

	

	printf("\n\n---REXISTRO DE AUTORES---\n\n");
	printf("Que clase de rexistro desexa facer:\n");
   	printf("(1)\tPersoa individual\n");
	printf("(2)\tGrupo\n");
	printf("Seleccione a opcion que mais se axuste a vostede.");
	printf("\n\t> ");
	tipoxeral = getInt();

	if (tipoxeral == 1){
		printf("DATOS PERSOAIS:\n");
		strcpy(tipo, "PARTICULAR");
		printf("(*) DNI\n\t> ");
		getString(id,25);
	}else{
		printf("DATOS DO GRUPO:\n");
		printf("(*) CIF ou identificador\n\t> ");
		getString(id,25);
		printf("(*) Tipo (empresa, revista...)\n\t> ");
		getString(tipo,30);
	}
	printf("(*) Nome\n\t> ");
	getString(nome,50);
	printf("Enlace a sua paxina web\n\t> ");
	getString(enlace,256);
   	
   	/* EXEC SQL INSERT INTO autor(idAutor,nome,enlace,tipo)
   	VALUES (:id, :nome, :enlace, :tipo); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert INTO autor ( idAutor , nome , enlace , tipo ) VAL\
UES ( :b0 , :b1 , :b2 , :b3 ) ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )81;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)id;
    sqlstm.sqhstl[0] = (unsigned long )25;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)nome;
    sqlstm.sqhstl[1] = (unsigned long )50;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)enlace;
    sqlstm.sqhstl[2] = (unsigned long )256;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)tipo;
    sqlstm.sqhstl[3] = (unsigned long )30;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (erro=errorManager());
}


   
	if(erro==0){
		if(doCommit==1){
			/* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )112;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) (erro=errorManager());
}


			printf("\n\nAutor insertado con exito\n\n\n");
		}else
			printf("\nTras este tramite, abrindo formulario de critica...\n");	
	}
	
	if(doCommit==1) {
		printf("[Pulse Enter para voltar ao menu principal]"); 
		pausa = getInt();
	}
}



/* ______________________________________________________
 * 
 * Engadir unha crítica á base de datos. 
 * ______________________________________________________
 */

void engadirCritica(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

   	
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int autor;
		char titulo[50];
		char data[128];
		time_t tempo;
		struct tm *tlocal;
		int puntuacion;
		char descricion[500];
		int xogo;
		char idAutor[25];
		int pausa;
   	/* EXEC SQL END DECLARE SECTION; */ 

	/* EXEC SQL SET TRANSACTION ISOLATION LEVEL READ COMMITTED; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction ISOLATION LEVEL READ COMMITTED";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )127;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	printf("\n\n---CRITICAS---\n\n");
	printf("Para poder realizar unha critica debes rexistrarte.\n");
   	printf("(1)\tRexistrarse\n");
	printf("(2)\tXa estou rexistrado\n");
	printf("\n\t> ");
	autor = getInt();

	if (autor == 1){

		engadirAutor(0);
		printf("\n\n---CRITICAS---\n\n");
	}	
	printf("(*) Identificador do autor\n\t> ");
	getString(idAutor,25);
	printf("(*) Codigo do xogo\n\t> ");
	xogo = getInt();
	printf("(*) Titulo da critica\n\t> ");
	getString(titulo,50);
	printf("(*) Puntuacion sobre 100:\n\t>");
	puntuacion = getInt();
	printf("Descricion (un unico paragrafo)\n\t> ");
	getString(descricion,500);
	tempo = time(0);
	tlocal = localtime(&tempo);
	strftime(data,128,"%d/%m/%y",tlocal);	
   	
   	/* EXEC SQL INSERT INTO critica(tituloCritic,data,puntuacion,descricion,xogo,autor)
   	VALUES (:titulo, :data, :puntuacion, :descricion, :xogo, :idAutor); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert INTO critica ( tituloCritic , data , puntuacion ,\
 descricion , xogo , autor ) VALUES ( :b0 , :b1 , :b2 , :b3 , :b4 , :b5 ) ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )142;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)titulo;
    sqlstm.sqhstl[0] = (unsigned long )50;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)data;
    sqlstm.sqhstl[1] = (unsigned long )128;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&puntuacion;
    sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)descricion;
    sqlstm.sqhstl[3] = (unsigned long )500;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&xogo;
    sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)idAutor;
    sqlstm.sqhstl[5] = (unsigned long )25;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (erro=errorManager());
}


   
	if(erro==0){
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )181;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		printf("\n\nCritica insertada con exito\n\n\n");
	} else
		if(autor == 1){
			printf("\n[--ATENCION--\n");
			printf("O rexistro como autor que se realizou nesta opcion do menu (9. Engadir critica) ");
			printf("non se vai a conservar, dado que a critica non se puido completar con exito.\n\n");
			printf("Se desea asegurar a creacion do rexistro como autor, utilice a opcion 5 do menu.]\n\n");
		}
	printf("[Pulse Enter para voltar ao menu principal]");
	pausa = getInt();
}



/* ______________________________________________________
 * 
 * Engadir un xogo á base de datos.
 * ______________________________________________________
 */

void engadirXogo(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

   	
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char tituloXogo[50];
		char dia[4];
		char mes[4];
		char ano[6];
		char dataDeSaida[11];
		int votosPositivos,votosNegativos,pausa;
   	/* EXEC SQL END DECLARE SECTION; */ 

	/* EXEC SQL SET TRANSACTION ISOLATION LEVEL READ COMMITTED; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction ISOLATION LEVEL READ COMMITTED";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )196;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}


	
	printf("\n\n---REXISTRO DE XOGOS---\n\n");
	printf("(*) Titulo\n\t> ");
	getString(tituloXogo,50);
	printf("Data de saida:\n\t>Dia(dd): ");
	getString(dia,4);
	printf("\n\t>Mes(mm): ");
	getString(mes,4);
	printf("\n\t>Ano(yyyy): ");
	getString(ano,6);
	strcpy(dataDeSaida,dia);
	strcat(dataDeSaida,"/");
	strcat(dataDeSaida,mes);
	strcat(dataDeSaida,"/");
	strcat(dataDeSaida,ano);
   	votosPositivos = 0; 
	votosNegativos = 0;

   	/* EXEC SQL INSERT INTO xogo(tituloXogo,dataDeSaida,votosPositivos,votosNegativos)
   	VALUES (:tituloXogo, :dataDeSaida, :votosPositivos, :votosNegativos); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert INTO xogo ( tituloXogo , dataDeSaida , votosPosit\
ivos , votosNegativos ) VALUES ( :b0 , :b1 , :b2 , :b3 ) ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )211;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)tituloXogo;
    sqlstm.sqhstl[0] = (unsigned long )50;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)dataDeSaida;
    sqlstm.sqhstl[1] = (unsigned long )11;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&votosPositivos;
    sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&votosNegativos;
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (erro=errorManager());
}


   
	if(erro==0){
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )242;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		printf("\n\nXogo insertado con exito\n\n\n");
	}

	printf("[Pulse Enter para voltar ao menu principal]\n"); pausa = getInt();
}



/* ______________________________________________________
 * 
 * Eliminar un autor da base de datos.
 * ______________________________________________________
 */

void eliminarAutor(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 


   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		char id[25];
		int pausa;
	/* EXEC SQL END DECLARE SECTION; */ 

	/* EXEC SQL SET TRANSACTION ISOLATION LEVEL READ COMMITTED; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction ISOLATION LEVEL READ COMMITTED";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )257;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}


	
	printf("\n\n---ELIMINACION DE AUTORES---\n\n");
	printf("Identificador do autor\n\t> "); 
	getString(id,25);

	/* EXEC SQL DELETE FROM autor 
		WHERE idAutor = :id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "delete FROM autor WHERE idAutor = :b0 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )272;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)id;
 sqlstm.sqhstl[0] = (unsigned long )25;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	if (sqlca.sqlerrd[2] > 0)
		printf("\nAutor eliminado con exito\n\n\n");
	else
		printf("\nNon se atopou ningun autor con ese identificador.\n\n\n");

	if (!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )291;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}



	printf("[Pulse Enter para voltar ao menu principal]"); pausa = getInt();
}



/* ______________________________________________________
 * 
 * Eliminar un xogo da base de datos.
 * ______________________________________________________
 */

void eliminarXogo(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 


   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int cod,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 

	/* EXEC SQL SET TRANSACTION ISOLATION LEVEL READ COMMITTED; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction ISOLATION LEVEL READ COMMITTED";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )306;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	printf("\n\n---ELIMINACION DE XOGOS---\n\n");
	printf("Codigo do xogo\n\t> "); 
	cod = getInt();

	/* EXEC SQL DELETE FROM xogo 
		WHERE codXogo = :cod; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "delete FROM xogo WHERE codXogo = :b0 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )321;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&cod;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	if (sqlca.sqlerrd[2] > 0)
		printf("\nXogo eliminado con exito\n\n\n");
	else
		printf("\nNon se atopou ningun xogo con ese codigo.\n\n\n");

	if (!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )340;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}



	printf("[Pulse Enter para voltar ao menu principal]"); pausa = getInt();	
}



/* ______________________________________________________
 * 
 * Buscar unha crítica (parte da funcionalidade de buscar
 * xogos por nome)
 * ______________________________________________________
 */

void buscarCritica() {
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

        	int codCritic;
        	char tituloCritic[51];
        	char autor[51];
        	int puntuacion;
        	char dataC[11];
        	short dataC_ind;
        	char descripcion[501];
        	char xogo[51];
		int pausa;
	/* EXEC SQL END DECLARE SECTION; */ 


        printf("\n\n---CRITICAS---\n\n");
	printf("Codigo da critica\n\t> "); 
   	codCritic = getInt();

        /* EXEC SQL SET TRANSACTION READ ONLY; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "set transaction READ ONLY";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )355;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) (erro=errorManager());
}



        /* EXEC SQL SELECT codCritic, tituloCritic,
			(SELECT tituloXogo 
			FROM xogo WHERE codXogo=c.xogo), 
			(SELECT nome 
			FROM autor 
			WHERE idAutor=c.autor), 
			puntuacion,descricion, TO_CHAR(data, 'dd/mm/yyyy')
                INTO :codCritic,:tituloCritic,:xogo,:autor,:puntuacion,:descripcion,:dataC:dataC_ind
        	FROM critica c
        	WHERE codCritic=:codCritic ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select codCritic , tituloCritic , ( SELECT tituloXog\
o FROM xogo WHERE codXogo = c . xogo ) , ( SELECT nome FROM autor WHERE idAut\
or = c . autor ) , puntuacion , descricion , TO_CHAR ( data , 'dd/mm/yyyy' ) \
INTO :b0 , :b1 , :b2 , :b3 , :b4 , :b5 , :b6:b7 FROM critica c WHERE codCriti\
c = :b0 ";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )370;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (unsigned char  *)&codCritic;
        sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (unsigned char  *)tituloCritic;
        sqlstm.sqhstl[1] = (unsigned long )51;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (unsigned char  *)xogo;
        sqlstm.sqhstl[2] = (unsigned long )51;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (unsigned char  *)autor;
        sqlstm.sqhstl[3] = (unsigned long )51;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&puntuacion;
        sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (unsigned char  *)descripcion;
        sqlstm.sqhstl[5] = (unsigned long )501;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned long )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (unsigned char  *)dataC;
        sqlstm.sqhstl[6] = (unsigned long )11;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         short *)&dataC_ind;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned long )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (unsigned char  *)&codCritic;
        sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         short *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned long )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) (erro=errorManager());
}



	if(sqlca.sqlcode == 1403){
		printf("Non hai criticas con ese codigo.\n\n");
	}else{
		printf("--Codigo--\t--Titulo--\t--Xogo--\t--Autor--\t--Puntuacion--\n");
		printf(" %d\t%s\t%s\t%s\t%d\n",codCritic,tituloCritic,xogo,autor,puntuacion);
		printf("-----------------------------------------------------------------\n");
		printf("%s\n",descripcion);
		if(dataC_ind==0)printf("Datado de: %s\n\n",dataC);
	}

	if(!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )417;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}



	printf("[Pulse Enter para voltar ao menu principal]"); pausa = getInt();
}



/* ______________________________________________________
 * 
 * Listar as críticas dun xogo (parte da funcionalidade de
 * buscar xogos por código)
 * ______________________________________________________
 */

void listarCriticasXogo( int id) {
        int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int identificador;
        	int codCritic;
        	char tituloCritic[51];
        	char autor[51];
        	int puntuacion;
		int it1,menu,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 


        identificador=id;

	/* EXEC SQL SET TRANSACTION READ ONLY; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction READ ONLY";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )432;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	
	
      	/* EXEC SQL DECLARE cursor_critics CURSOR FOR
        	SELECT codCritic, tituloCritic, (SELECT nome FROM autor WHERE idAutor=c.autor), puntuacion 
                FROM critica c 
		WHERE xogo=:identificador; */ 


	/* EXEC SQL OPEN cursor_critics; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0023;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )447;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&identificador;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 

	
	it1 = 0;
	while(1) {
		/* EXEC SQL FETCH cursor_critics
		INTO :codCritic,:tituloCritic,:autor,:puntuacion; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )466;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&codCritic;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)tituloCritic;
  sqlstm.sqhstl[1] = (unsigned long )51;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)autor;
  sqlstm.sqhstl[2] = (unsigned long )51;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&puntuacion;
  sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		if(sqlca.sqlcode == 1403){
			printf("Non hai criticas para este xogo.\n");
		}else{
			if (it1 == 0){
				printf("\n\n---LISTADO DE CRITICAS DO XOGO---\n\n");
				printf("--Codigo--\t--Titulo--\t--Autor--\t--Puntuacion--\n\n");
				it1++;
			}
			printf(" %d\t%s\t%s\t%d\n\n",codCritic,tituloCritic,autor,puntuacion);
		}
	}
        
        /* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

	
	printf("\nCriticas atopadas: %d.\n\n", sqlca.sqlerrd[2]);
	
	/* EXEC SQL CLOSE cursor_critics; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )497;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}


        
        if(!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )512;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


        
	if (sqlca.sqlerrd[2] > 0){
		printf("Desexa ver algunha critica en detalle?\n\n");
		printf("(1)\tSi.\n");
		printf("(2)\tNon, quero sair.\n");
		printf("\n\t> ");
		menu = getInt();
		if (menu == 1)
        		buscarCritica();
		else
			return;
	}else{
		printf("[Pulse Enter para voltar ao menu principal]"); 
		pausa = getInt();
	}
}



/* ______________________________________________________
 * 
 * Listar todas as críticas dun autor.
 * ______________________________________________________
 */

void listarCriticasAutor(){
        int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		/* VARCHAR patron[25]; */ 
struct { unsigned short len; unsigned char arr[25]; } patron;

		char autor[25];
        	int codCritic;
        	char tituloCritic[51];
        	char xogo[51];
        	int puntuacion;
		int pausa,menu,it1;
	/* EXEC SQL END DECLARE SECTION; */ 


	printf("\n\n---CRITICAS DE AUTOR---\n\n");
	printf("Identificador do autor\n\t> "); 
   	getString(autor,25);

	/* EXEC SQL SET TRANSACTION READ ONLY; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction READ ONLY";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )527;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	
	
		/* EXEC SQL DECLARE cursor_criticsA CURSOR FOR
                SELECT codCritic, tituloCritic, (SELECT tituloXogo FROM xogo WHERE codXogo=c.xogo), puntuacion 
                FROM critica c 
		WHERE autor = :autor; */ 


	/* EXEC SQL OPEN cursor_criticsA; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0026;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )542;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (unsigned char  *)autor;
 sqlstm.sqhstl[0] = (unsigned long )25;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	

	/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 

	
	it1 = 0;
	while(1) {
		/* EXEC SQL FETCH cursor_criticsA
		INTO :codCritic,:tituloCritic,:autor,:puntuacion; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )561;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&codCritic;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)tituloCritic;
  sqlstm.sqhstl[1] = (unsigned long )51;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)autor;
  sqlstm.sqhstl[2] = (unsigned long )25;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&puntuacion;
  sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		if(sqlca.sqlcode == 1403){
			printf("Non hai criticas para este autor.\n");
		}else{
			if (it1 == 0){
				printf("\n\n---LISTADO DE CRITICAS DO AUTOR---\n\n");
				printf("--Codigo--\t--Titulo--\t--Autor--\t--Puntuacion--\n\n");
				it1++;
			}
			printf(" %d\t%s\t%s\t%d\n\n",codCritic,tituloCritic,autor,puntuacion);
		}
	}
        
        /* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

	
	printf("\nCriticas atopadas: %d.\n\n", sqlca.sqlerrd[2]);
	
	/* EXEC SQL CLOSE cursor_criticsA; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )592;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}


        
        if(!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )607;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


        
	if (sqlca.sqlerrd[2] > 0){
		printf("Desexa ver algunha critica en detalle?\n\n");
		printf("(1)\tSi.\n");
		printf("(2)\tNon, quero sair.\n");
		printf("\n\t> ");
		menu = getInt();
		if (menu == 1)
        		buscarCritica();
		else
			return;
	}else{
		printf("[Pulse Enter para voltar ao menu principal]"); 
		pausa = getInt();
	}
}



/* ______________________________________________________
 * 
 * Buscar un xogo polo seu código (parte da funcionalidade
 * de listar todos os xogos).
 * ______________________________________________________
 */


void buscarXogoCodigo(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int codXogo;
		char tituloXogo[51];
		char dataDeSaida[11];
		short dataDeSaida_ind;
        	int votosPositivos;
        	int votosNegativos;
        	int notaMedia;
	/* EXEC SQL END DECLARE SECTION; */ 


	/* EXEC SQL SET TRANSACTION READ ONLY; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction READ ONLY";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )622;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	

	printf("\n\n---XOGOS---\n\n");
	printf("Codigo do xogo que quere ver en detalle\n\t> "); 
   	codXogo=getInt();

	/* EXEC SQL SELECT codXogo,tituloXogo,TO_CHAR(dataDeSaida, 'dd/mm/yyyy'),
			votosPositivos,votosNegativos, nvl((SELECT AVG(puntuacion) 
							    FROM critica 
							    WHERE xogo=x.codXogo),0) 
		INTO :codXogo,:tituloXogo,:dataDeSaida:dataDeSaida_ind,:votosPositivos,:votosNegativos,:notaMedia
                FROM xogo x
		WHERE codXogo=:codXogo; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select codXogo , tituloXogo , TO_CHAR ( dataDeSaida , 'dd/m\
m/yyyy' ) , votosPositivos , votosNegativos , nvl ( ( SELECT AVG ( puntuacion\
 ) FROM critica WHERE xogo = x . codXogo ) , 0 ) INTO :b0 , :b1 , :b2:b3 , :b\
4 , :b5 , :b6 FROM xogo x WHERE codXogo = :b0 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )637;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codXogo;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (unsigned char  *)tituloXogo;
 sqlstm.sqhstl[1] = (unsigned long )51;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (unsigned char  *)dataDeSaida;
 sqlstm.sqhstl[2] = (unsigned long )11;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         short *)&dataDeSaida_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&votosPositivos;
 sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (unsigned char  *)&votosNegativos;
 sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         short *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned long )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (unsigned char  *)&notaMedia;
 sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         short *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned long )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (unsigned char  *)&codXogo;
 sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         short *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned long )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	if(sqlca.sqlcode == 1403)	
		printf("Non se atopou ningun xogo co codigo indicado.\n");
	else  {
		printf("\n\n---XOGO---\n\n");
                printf("--Codigo--\t--Titulo--\t--Data de saida--\t--Votos Positivos--\t--Votos Negativos--\t--Nota Media--\n");
                if(dataDeSaida_ind == 0)
                        printf(" %d\t%s\t%s\t%d\t%d\t%d\n",codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,notaMedia);
                else
                        printf(" %d\t%s\tSen data\t%d\t%d\t%d\n",codXogo,tituloXogo,votosPositivos,votosNegativos,notaMedia);	
        }

        if(!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )680;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


        
        listarCriticasXogo(codXogo);
}



/* ______________________________________________________
 * 
 * Buscar xogos polo seu nome.
 * ______________________________________________________
 */

void buscarXogoTitulo(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int codXogo;
        	char tituloXogo[51], patron[53];
        	char dataDeSaida[11];
        	short dataDeSaida_ind;
        	int votosPositivos;
        	int votosNegativos;
        	int notaMedia;
		int menu,pausa,it1;
	/* EXEC SQL END DECLARE SECTION; */ 


	/* EXEC SQL SET TRANSACTION READ ONLY; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction READ ONLY";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )695;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	

	printf("\n\n---BUSCADOR DE XOGOS---\n\n");
	printf("Titulo do xogo\n\t> "); 
   	getString(tituloXogo,50);

    	strcpy(patron, "%");
	strcat(patron, tituloXogo);
	strcat(patron, "%");

	/* EXEC SQL DECLARE cursor_xogoT CURSOR FOR 
		SELECT codXogo,tituloXogo,TO_CHAR(dataDeSaida, 'dd/mm/yyyy'),
			votosPositivos,votosNegativos,nvl((SELECT AVG(puntuacion) 
							   FROM critica WHERE xogo=x.codXogo),0) 
		
                FROM xogo x 
		WHERE tituloXogo LIKE :patron; */ 


	/* EXEC SQL OPEN cursor_xogoT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0032;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )710;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (unsigned char  *)patron;
 sqlstm.sqhstl[0] = (unsigned long )53;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	
	
	/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


	it1 = 0;
	while(1){
		/* EXEC SQL FETCH cursor_xogoT
		INTO :codXogo,:tituloXogo,:dataDeSaida:dataDeSaida_ind,:votosPositivos,:votosNegativos,:notaMedia; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )729;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&codXogo;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)tituloXogo;
  sqlstm.sqhstl[1] = (unsigned long )51;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)dataDeSaida;
  sqlstm.sqhstl[2] = (unsigned long )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)&dataDeSaida_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&votosPositivos;
  sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&votosNegativos;
  sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&notaMedia;
  sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		
		if(sqlca.sqlcode == 1403)	
			printf("Non se atopou o titulo indicado.\n");
		else {
			if (it1 == 0){
				printf("\n\n---XOGOS---\n\n");
				printf("--Codigo--\t--Titulo--\t--Data de saida--");
				printf("\t--Votos Positivos--\t--Votos Negativos--\t--Nota Media--\n");	
				it1++;
			}
	                if(dataDeSaida_ind == 0)
	                        printf(" %d\t%s\t%s\t%d\t%d\t%d\n",codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,notaMedia);
	                else
	                        printf(" %d\t%s\tSen data\t%d\t%d\t%d\n",codXogo,tituloXogo,votosPositivos,votosNegativos,notaMedia);	
	        }
        }

        /* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 


	/* EXEC SQL CLOSE cursor_xogoT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )768;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



        if(!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )783;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


        
        if (sqlca.sqlerrd[2] > 0){
		printf("Desexa ver algun xogo en detalle?\n\n");
		printf("(1)\tSi.\n");
		printf("(2)\tNon, quero sair.\n");
		printf("\n\t> ");
		menu = getInt();
		if (menu == 1)
        		buscarXogoCodigo();
		else
			return;
	}else{
		printf("Non se atoparon xogos.\n\n[Pulse Enter para voltar ao menu principal]"); 
		pausa = getInt();
	}
}



/* ______________________________________________________
 * 
 * Buscar autores polo seu nome.
 * ______________________________________________________
 */

void buscarAutor(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		/* VARCHAR idAutor[25]; */ 
struct { unsigned short len; unsigned char arr[25]; } idAutor;

        	char nome[51], patron[53];
		char enlace[257];
		short enlace_ind;
        	char tipo[31];
		int it1,menu,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 


	/* EXEC SQL SET TRANSACTION READ ONLY; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction READ ONLY";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )798;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	

	printf("\n\n---BUSCADOR DE AUTORES---\n\n");
	printf("Nome do autor\n\t> "); 
   	getString(nome,50);

 	strcpy(patron, "%");
	strcat(patron, nome);
	strcat(patron, "%");

	/* EXEC SQL DECLARE cursor_autor CURSOR FOR
		SELECT idAutor, nome, enlace, tipo
                FROM autor 
		WHERE nome LIKE :patron; */ 


	/* EXEC SQL OPEN cursor_autor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0035;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )813;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (unsigned char  *)patron;
 sqlstm.sqhstl[0] = (unsigned long )53;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}


	
	/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


	it1=0;
	while(1){
		/* EXEC SQL FETCH cursor_autor
		INTO :idAutor,:nome,:enlace:enlace_ind,:tipo; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )832;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&idAutor;
  sqlstm.sqhstl[0] = (unsigned long )27;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)nome;
  sqlstm.sqhstl[1] = (unsigned long )51;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)enlace;
  sqlstm.sqhstl[2] = (unsigned long )257;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)&enlace_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)tipo;
  sqlstm.sqhstl[3] = (unsigned long )31;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		if(sqlca.sqlcode == 1403)	
			printf("Non se atopou ningun autor con ese nome.\n");
		else {
			if(it1 == 0){
				printf("\n\n---LISTADO DE AUTORES---\n\n");
				printf("--Codigo--\t--Nome--\t--Enlace--\t--Tipo--\n");
				it1++;
			}
                	if(enlace_ind == 0)
                	        printf(" %.*s\t%s\t%s\t%s\n",idAutor.len,idAutor.arr,nome,enlace,tipo);
                	else
                	        printf(" %.*s\t%s\tSen enlace\t%s\n",idAutor.len,idAutor.arr,nome,tipo);
		}	
    	}
	
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 


	/* EXEC SQL CLOSE cursor_autor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )863;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



        if(!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )878;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


        
	if (sqlca.sqlerrd[2] > 0){
		printf("Desexa ver as criticas dalgun autor?\n\n");
		printf("(1)\tSi.\n");
		printf("(2)\tNon, quero sair.\n");
		printf("\n\t> ");
		menu = getInt();
		if (menu == 1)
        		listarCriticasAutor();
		else
			return;
	}else{
		printf("Non se atoparon autores.\n\n[Pulse Enter para voltar ao menu principal]"); 
		pausa = getInt();
	}
}



/* ______________________________________________________
 * 
 * Listar todos os xogos da base de datos.
 * ______________________________________________________
 */

void listarXogos(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 


   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int codXogo;
		char tituloXogo[51];
		char dataDeSaida[11];
		short dataDeSaida_ind;
        	int votosPositivos;
        	int votosNegativos;
        	int notaMedia;
		int it1,menu,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 


	/* EXEC SQL SET TRANSACTION READ ONLY; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction READ ONLY";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )893;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	

	/* EXEC SQL DECLARE cursor_elementos CURSOR FOR
		SELECT codXogo,tituloXogo, TO_CHAR(dataDeSaida, 'dd/mm/yyyy'),
			votosPositivos,votosNegativos,nvl((SELECT AVG(puntuacion) 
							   FROM critica 
							   WHERE xogo=x.codXogo),0) 
		FROM xogo x; */ 

	
	/* EXEC SQL OPEN cursor_elementos; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0038;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )908;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}

	

	/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 
	
	
	it1=0;
	while(1) {
		/* EXEC SQL FETCH cursor_elementos
		INTO :codXogo,:tituloXogo,:dataDeSaida:dataDeSaida_ind,:votosPositivos,:votosNegativos,:notaMedia; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )923;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&codXogo;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)tituloXogo;
  sqlstm.sqhstl[1] = (unsigned long )51;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)dataDeSaida;
  sqlstm.sqhstl[2] = (unsigned long )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)&dataDeSaida_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&votosPositivos;
  sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&votosNegativos;
  sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&notaMedia;
  sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		if(sqlca.sqlcode == 1403)	
			printf("Non hai xogos.\n");
		else{
            		if (it1 == 0){
				printf("\n\n---LISTADO DE XOGOS---\n\n");
				printf("--Codigo--\t--Titulo--\t--Data de saida--");
				printf("\t--Votos Positivos--\t--Votos Negativos--\t--Nota Media--\n");
				it1++;
			}
			if(dataDeSaida_ind == 0)
				printf(" %d\t%s\t%s\t%d\t%d\t%d\n",codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,notaMedia);
			else
				printf(" %d\t%s\tSen data\t%d\t%d\t%d\n",codXogo,tituloXogo,votosPositivos,votosNegativos,notaMedia);
		}
	}
         
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 


	printf("\nXogos atopados: %d.\n\n", sqlca.sqlerrd[2]);

	/* EXEC SQL CLOSE cursor_elementos; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )962;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	if(!erro) /* EXEC SQL COMMIT; */ 

{
           struct sqlexd sqlstm;
           sqlstm.sqlvsn = 13;
           sqlstm.arrsiz = 8;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )977;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)4352;
           sqlstm.occurs = (unsigned int  )0;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
           if (sqlca.sqlcode < 0) (erro=errorManager());
}


	
	if (sqlca.sqlerrd[2] > 0){
		printf("Desexa ver algun xogo en detalle?\n\n");
		printf("(1)\tSi.\n");
		printf("(2)\tNon, quero sair.\n");
		printf("\n\t> ");
		menu = getInt();
		if (menu == 1)
        		buscarXogoCodigo();
		else
			return;
	}else{
		printf("[Pulse Enter para voltar ao menu principal]"); 
		pausa = getInt();
	}
}



/* ______________________________________________________
 * 
 * Mostrar os votos dun xogo (parte da funcionalidade de
 * votar positiva ou negativamente).
 * ______________________________________________________
 */


void mostrarVotos(int codXogo){
	int erro = 0;
	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

	
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int cod,votosP,votosN;
		char titulo[50];
	/* EXEC SQL END DECLARE SECTION; */ 
 

	/* EXEC SQL SET TRANSACTION READ ONLY; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction READ ONLY";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )992;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	cod = codXogo;

	/* EXEC SQL SELECT tituloXogo, votosPositivos, votosNegativos  
	INTO :titulo,:votosP, :votosN
	FROM xogo
	WHERE codXogo = :cod; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select tituloXogo , votosPositivos , votosNegativos INTO :b\
0 , :b1 , :b2 FROM xogo WHERE codXogo = :b3 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1007;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)titulo;
 sqlstm.sqhstl[0] = (unsigned long )50;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&votosP;
 sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&votosN;
 sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&cod;
 sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
	printf("\n%s",titulo);
	printf("\n\tVotos positivos: %d",votosP);
	printf("\n\tVotos negativos: %d",votosN);
	
	if (!erro)
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1038;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		
}



/* ______________________________________________________
 * 
 * Editar os datos dun autor.
 * ______________________________________________________
 */

void editarAutor(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		char idAutor[25];
		char nome[50];
		char enlace[256];
		int pausa;
	/* EXEC SQL END DECLARE SECTION; */ 

	
	/* EXEC SQL SET TRANSACTION ISOLATION LEVEL SERIALIZABLE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction ISOLATION LEVEL SERIALIZABLE";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1053;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	printf("\n\n---EDITAR DATOS DE AUTOR---\n\n");
	printf("Identificador do autor a modificar> "); 
	getString(idAutor,25);
	printf("\nInserte os novos datos:\n\n");
	printf("(*) Nome\n\t> ");
	getString(nome,50);
	printf("Enlace a sua paxina web\n\t> ");
	getString(enlace,256);

	/* EXEC SQL UPDATE autor
		SET nome = :nome, enlace =:enlace
		WHERE idAutor = :idAutor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update autor SET nome = :b0 , enlace = :b1 WHERE idAutor = \
:b2 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1068;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)nome;
 sqlstm.sqhstl[0] = (unsigned long )50;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (unsigned char  *)enlace;
 sqlstm.sqhstl[1] = (unsigned long )256;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (unsigned char  *)idAutor;
 sqlstm.sqhstl[2] = (unsigned long )25;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	if(!erro){
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1095;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		if (sqlca.sqlerrd[2] > 0)
			printf("\nAutor editado con exito\n\n\n");
		else
			printf("\nNon se atopou ningun autor con ese identificador.\n\n\n");
	}
	printf("[Pulse Enter para voltar ao menu principal]"); pausa = getInt();
}



/* ______________________________________________________
 * 
 * Votar positivamente por un xogo.
 * ______________________________________________________
 */

void votarPositivamente(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int codXogo,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 

	
	/* EXEC SQL SET TRANSACTION ISOLATION LEVEL SERIALIZABLE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction ISOLATION LEVEL SERIALIZABLE";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1110;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	printf("\n\n---VOTAR POSITIVAMENTE---\n\n");
	printf("Codigo do xogo> "); 
	codXogo = getInt();

	/* EXEC SQL UPDATE xogo
		SET votosPositivos = votosPositivos + 1
		WHERE codXogo = :codXogo; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update xogo SET votosPositivos = votosPositivos + 1 WHERE c\
odXogo = :b0 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1125;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codXogo;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	if(!erro){
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1144;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		if (sqlca.sqlerrd[2] > 0){
			mostrarVotos(codXogo);
			printf("\n\nGracias por votar!\n\n\n");	
		}else
			printf("\n\nNon se atopou ningun xogo con ese codigo.\n\n");
	}
	printf("[Pulse Enter para voltar ao menu principal]"); pausa = getInt();
}



/* ______________________________________________________
 * 
 * Votar negativamente por un xogo.
 * ______________________________________________________
 */

void votarNegativamente(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager(); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int codXogo,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 

	
	/* EXEC SQL SET TRANSACTION ISOLATION LEVEL SERIALIZABLE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction ISOLATION LEVEL SERIALIZABLE";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1159;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	printf("\n\n---VOTAR NEGATIVAMENTE---\n\n");
	printf("Codigo do xogo> "); 
	codXogo = getInt();

	/* EXEC SQL UPDATE xogo
		SET votosNegativos = votosNegativos + 1
		WHERE codXogo = :codXogo; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update xogo SET votosNegativos = votosNegativos + 1 WHERE c\
odXogo = :b0 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1174;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&codXogo;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (erro=errorManager());
}



	if(!erro){
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1193;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager());
}


		if (sqlca.sqlerrd[2] > 0){
			mostrarVotos(codXogo);
			printf("\n\nGracias por votar!\n\n\n");	
		}else
			printf("\n\nNon se atopou ningun xogo con ese codigo.\n\n");
	}

	printf("[Pulse Enter para voltar ao menu principal]"); pausa = getInt();
}



/* ______________________________________________________
 * 
 * Funcion principal.
 * ______________________________________________________
 */

int main() {
	conectaBD();

	int op;

	while ( (op=menu()) != 0){
		switch(op){
			case 1: listarXogos(); break;
			case 2: engadirXogo(); break;
			case 3: buscarXogoTitulo(); break;
			case 4: eliminarXogo(); break;
			case 5: engadirAutor(1); break;
			case 6: buscarAutor(); break;
			case 7: editarAutor(); break;
			case 8: eliminarAutor(); break;
			case 9: engadirCritica(); break;
			case 10: votarPositivamente(); break;
			case 11: votarNegativamente(); break;  
	       }
  	}
 
	desconectaBD(); 

	return 0;
}

