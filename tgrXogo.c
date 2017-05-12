
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
   unsigned char  *sqhstv[6];
   unsigned long  sqhstl[6];
            int   sqhsts[6];
            short *sqindv[6];
            int   sqinds[6];
   unsigned long  sqharm[6];
   unsigned long  *sqharc[6];
   unsigned short  sqadto[6];
   unsigned short  sqtdso[6];
} sqlstm = {13,6};

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

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* CUD (Compilation Unit Data) Array */
static short sqlcud0[] =
{13,4130,873,0,0,
5,0,0,1,0,0,31,100,0,0,0,0,0,1,0,
20,0,0,0,0,0,27,127,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,0,0,30,135,0,0,0,0,0,1,0,
66,0,0,4,144,0,44,146,0,0,0,0,0,1,0,
81,0,0,5,17,0,1,162,0,0,0,0,0,1,0,
96,0,0,6,86,0,3,210,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
127,0,0,7,0,0,29,214,0,0,0,0,0,1,0,
142,0,0,8,130,0,3,263,0,0,6,6,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,
1,97,0,0,
181,0,0,9,0,0,29,267,0,0,0,0,0,1,0,
196,0,0,10,113,0,3,304,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
227,0,0,11,0,0,29,308,0,0,0,0,0,1,0,
242,0,0,12,38,0,2,330,0,0,1,1,0,1,0,1,97,0,0,
261,0,0,13,0,0,29,339,0,0,0,0,0,1,0,
276,0,0,14,37,0,2,358,0,0,1,1,0,1,0,1,3,0,0,
295,0,0,15,0,0,29,367,0,0,0,0,0,1,0,
310,0,0,16,25,0,1,662,0,0,0,0,0,1,0,
325,0,0,17,103,0,4,666,0,0,4,1,0,1,0,2,97,0,0,2,3,0,0,2,3,0,0,1,3,0,0,
356,0,0,18,0,0,29,676,0,0,0,0,0,1,0,
371,0,0,19,72,0,5,695,0,0,1,1,0,1,0,1,3,0,0,
390,0,0,20,0,0,29,700,0,0,0,0,0,1,0,
405,0,0,21,72,0,5,723,0,0,1,1,0,1,0,1,3,0,0,
424,0,0,22,0,0,29,728,0,0,0,0,0,1,0,
};


/*
 * Autores:
 * Daniel López López (d.lopez.lopez@udc.es)
 * Sara Vidal García (sara.vidal@udc.es) 
 * Universidade da Coruña
 *
 * BDA - Curso 2016-2017
 *
 * TGR - XOGOS
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


/*
 * Utilidades para menús e ler valores por teclado. 
 * En "teclado.c" están repetidas con exemplos de uso 
 */
#define MAXLEN 20
void get_string(char *s, int maxlen){
	fgets(s,maxlen,stdin);
	int last = strlen(s) -1;
	if ( (s[last]=='\r') || (s[last]=='\n') )
		s[last] = '\0';
}

void get_password(char *s, int maxlen){
	system("stty -echo");
	get_string(s,maxlen);
	system("stty echo");
}

int get_int(){
	char s[MAXLEN];
	get_string(s,MAXLEN);
	return atoi(s);
}

float get_float(){
	char s[MAXLEN];
	get_string(s,MAXLEN);
	return atof(s);
}



/* Menú principal */

int menu()
{
  int opcion = -1;

  int MAXOPTS = 11; /* Número de opcións do menú */

  printf("Menu da aplicación de Xogos\n");
  printf("==================\n\n"); // - a medio hacer -- hecho
  printf("1. Listar Xogos\n"); //Raik -
  printf("2. Buscar Xogo\n"); //Raik -
  printf("3. Buscar Autor\n"); //Raik -
  printf("4. Engadir Critica\n"); //Sara -hecho-
  printf("5. Engadir Autor\n"); //Sara -hecho-
  printf("6. Engadir Xogo\n"); //Sara -hecho-
  printf("7. Eliminar Xogo\n"); //Sara -hecho-
  printf("8. Eliminar Autor\n"); //Sara -hecho-
  //printf("9. Modificar Critica\n");
  printf("10. Votar positivamente\n"); //hecho
  printf("11. Votar negativamente\n"); //hecho
  printf("0. Sair\n");

  while ( (opcion < 0) || (opcion > MAXOPTS)){
      printf("OP> ");
      opcion=get_int();
  }
  return opcion;
}


int errorManager(int salir){
	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	printf("\nError: %s\n",
      	sqlca.sqlerrm.sqlerrmc);
    
    	if(salir == 1){
       		exit(-1);
	}
	return -1;
}

int errorManager_DML(int salir)
{
	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	printf("\nError: %s\n",
      	sqlca.sqlerrm.sqlerrmc);
    
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


	
    	if(salir == 1){
       		exit(-1);
	}
	return -1;
}

/* Funcionalidadess de base de datos */

void conecta_bd(){
	int error;
	/* EXEC SQL WHENEVER SQLERROR DO error = errorManager(1); */ 

   
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      char usuario[30];
      
      char clave[30];
   /* EXEC SQL END DECLARE SECTION; */ 


   printf("Usuario: ");
   get_string(usuario,30);
   printf("Clave: ");
   get_password(clave,30);
  
   printf("\nConectando con Oracle...\n");
   /* Introducir código para conectar coa BD*/
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
   if (sqlca.sqlcode < 0) (error=errorManager(1));
}


   if(!error)
      printf("Conectado!\n");
}

void desconecta_bd(){
	/* EXEC SQL WHENEVER SQLERROR DO errorManager(1); */ 

   /* Introducir código para desconectar da BD*/
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
   if (sqlca.sqlcode < 0) errorManager(1);
}

    
}



void crear_taboa(){
	int error;
	/* EXEC SQL WHENEVER SQLERROR DO error = errorManager(0); */ 

	
   printf("Función crear_taboa().\n");
   /* Introducir código para crear unha táboa */
	/* EXEC SQL CREATE TABLE artigo (
	codart NUMBER(4),
	nomart VARCHAR2(20),
	prezoart NUMBER(5,2),
	CONSTRAINT PK_ARTIGO_D PRIMARY KEY(codart)
	); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "create TABLE artigo ( codart NUMBER ( 4 ) , nomart VARCHAR2\
 ( 20 ) , prezoart NUMBER ( 5 , 2 ) , CONSTRAINT PK_ARTIGO_D PRIMARY KEY ( co\
dart ) )";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )66;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (error=errorManager(0));
}


	if (!error)
		printf("Taboa creada!\n");
}

void eliminar_taboa(){
	int error;
	/* EXEC SQL WHENEVER SQLERROR DO error = errorManager(0); */ 

	
   printf("Función eliminar_taboa().\n");
   /* Introducir código para eliminar (drop) unha táboa */
   /* EXEC SQL DROP TABLE artigo; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE artigo";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )81;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) (error=errorManager(0));
}


   if (!error)
      printf("Taboa borrada!\n");
   
}





void engadir_autor(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0); */ 

   	
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int tipoxeral;
      		char id[25];
		char nome[50];
		char enlace[256];
		char tipo[30];
		int pausa;
   	/* EXEC SQL END DECLARE SECTION; */ 

	
	printf("REXISTRO DE AUTORES\n\n");
	printf("Que clase de rexistro desexa facer:\n");
   	printf("(1)\tPersoa individual\n");
	printf("(2)\tGrupo\n");
	printf("Seleccione a opción que mais se axuste a vostede.");
	printf("\n\t> ");
	tipoxeral = get_int();

	if (tipoxeral == 1){
		printf("DATOS PERSOAIS:\n");
		strcpy(tipo, "PARTICULAR");
		printf("(*) DNI\n\t> ");
		get_string(id,25);
	}else{
		printf("DATOS DO GRUPO:\n");
		printf("(*) CIF ou identificador\n\t> ");
		get_string(id,25);
		printf("(*) Tipo (empresa, revista...)\n\t> ");
		get_string(tipo,30);
	}
	printf("(*) Nome\n\t> ");
	get_string(nome,50);
	printf("Enlace a sua paxina web\n\t> ");
	get_string(enlace,256);
   	
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
    sqlstm.offset = (unsigned int  )96;
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
    if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}


   
	if(erro==0){
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )127;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}


		printf("\n\nAutor insertado con exito\n\n\n");
	}
	pausa = get_int();
}


void engadir_critica(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0); */ 

   	
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


	printf("CRITICAS\n\n");
	printf("Autor xa rexistrado ou novo autor?:\n");
   	printf("(1)\tNovo\n");
	printf("(2)\tExistente\n");
	printf("\n\t> ");
	autor = get_int();

	if (autor == 1){
		engadir_autor();
		printf("CRITICAS\n\n");
	}	
	printf("Identificador do autor\n\t> ");
	get_string(idAutor,25);
	printf("(*) Codigo do xogo\n\t> ");
	xogo = get_int();
	printf("(*) Titulo da critica\n\t> ");
	get_string(titulo,50);
	printf("(*) Puntuacion sobre 100:\n\t>");
	puntuacion = get_int();
	printf("(*) Descricion (un unico paragrafo)\n\t> ");
	get_string(descricion,500);
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
    if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
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
  if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}


		printf("\n\nCritica insertada con exito\n\n\n");
	}
	pausa = get_int();
}


void engadir_xogo(){
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0); */ 

   	
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char tituloXogo[50];
		char dia[4];
		char mes[4];
		char ano[6];
		char dataDeSaida[11];
		int votosPositivos,votosNegativos,pausa;
   	/* EXEC SQL END DECLARE SECTION; */ 

	
	printf("REXISTRO DE XOGOS\n\n");
	printf("(*) Titulo\n\t> ");
	get_string(tituloXogo,50);
	printf("Data de saida:\n\t>Dia(dd): ");
	get_string(dia,4);
	printf("\n\t>Mes(mm): ");
	get_string(mes,4);
	printf("\n\t>Ano(yyyy): ");
	get_string(ano,6);
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
    sqlstm.offset = (unsigned int  )196;
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
    if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
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
  sqlstm.offset = (unsigned int  )227;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}


		printf("\n\nXogo insertado con exito\n\n\n");
	}
	pausa = get_int();
}



void eliminar_autor()
{
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0); */ 


   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		char id[25];
		int pausa;
	/* EXEC SQL END DECLARE SECTION; */ 


	printf("ELIMINACION DE AUTORES\n\n");
	printf("Identificador do autor\n\t> "); 
	get_string(id,25);

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
 sqlstm.offset = (unsigned int  )242;
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
 if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}



	if (sqlca.sqlerrd[2] > 0)
		printf("\nAutor eliminado con exito\n\n\n");
	else
		printf("\nAutor non eliminado\n\n\n");

	if (!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )261;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}



	pausa = get_int();
}


void eliminar_xogo()
{
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0); */ 


   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int cod,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 


	printf("ELIMINACION DE XOGOS\n\n");
	printf("Codigo do xogo\n\t> "); 
	cod = get_int();

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
 sqlstm.offset = (unsigned int  )276;
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
 if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}



	if (sqlca.sqlerrd[2] > 0)
		printf("\nXogo eliminado con exito\n\n\n");
	else
		printf("\nXogo non eliminado\n\n\n");

	if (!erro) 
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )295;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}



	pausa = get_int();	
}




void buscarCritica() {
	/*int erro = 0;		
	EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0);
	
	printf("Función buscarCriticasXogo().\n");
   	EXEC SQL BEGIN DECLARE SECTION;
        char codCritic[26];
		char tituloCritic[51];
        char autor[51];
        int puntuacion;
        time_t data;
        short data_ind;
        char descripcion[501];
        char xogo[51];
	EXEC SQL END DECLARE SECTION;

    printf("Introduzca o código da crítica: ");
   	get_string(codCritic,25);

	//Control de salida

	if(strcmp(codCritic,'0') != 0)
		return;

	EXEC SQL SET TRANSACTION READ ONLY;	
	


		EXEC SQL SELECT codCritic, tituloCritic, (SELECT tituloXogo FROM xogo WHERE codXogo=xogo), (SELECT nome FROM autor WHERE idAutor=autor), puntuacion,descricion,data
			INTO :codCritic,:tituloCritic,:xogo,:autor,:puntuacion,:descripcion,:data:data:_ind
                FROM critica 
		WHERE autor=:codXogo;

	
	EXEC SQL OPEN cursor_critics;	
	EXEC SQL WHENEVER NOT FOUND DO BREAK;
	
	if(sqlca.sqlcode == 1403){
		printf("Non hai criticas con ese código.");
	}else{
		printf("--Criticas--\n--Codigo--\t--Titulo--\t--Autor--\t--Puntuacion--\n");
		printf(" %s\t%s\t%s\t%s\t%d\n",codCritic,tituloCritic,xogo,autor,puntuacion);
		printf("-----------------------------------------------------------------\n");
		printf("%s\n",descripcion);
		if(data_ind==0)printf("A fecha: %f",data);
	}
	if(!erro) EXEC SQL COMMIT;*/
}

void listarCriticas(int opcion, char id)
{
        /*int erro = 0;		
	EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0);
	
	printf("Función buscarCriticasXogo().\n");
   	EXEC SQL BEGIN DECLARE SECTION;
      	char identificador[26];
        char codCritic[26];
		char tituloCritic[51];
        char autor[51];
        int puntuacion;
	EXEC SQL END DECLARE SECTION;

        identificador=id;

	EXEC SQL SET TRANSACTION READ ONLY;	
	
	if(opcion==0){
	EXEC SQL DECLARE cursor_critics CURSOR FOR
                SELECT codCritic, tituloCritic, (SELECT nome FROM autor WHERE idAutor=autor), puntuacion 
                FROM critica 
		WHERE xogo=:identificador;

	} else {
		EXEC SQL DECLARE cursor_critics CURSOR FOR
                SELECT codCritic, tituloCritic, (SELECT nome FROM autor WHERE idAutor=autor), puntuacion 
                FROM critica 
		WHERE autor=:identificador;

	}
	EXEC SQL OPEN cursor_critics;	
	EXEC SQL WHENEVER NOT FOUND DO BREAK;
	while(1) {
		EXEC SQL FETCH cursor_critics
		INTO :codCritic,:tituloCritic,:autor,:puntuacion;
		if(sqlca.sqlcode == 1403){
			printf("Non hai criticas para este");
			if(opcion==0)
				printf("xogo.\n");
			else
				printf("autor.\n");
		}else{
			printf("--Criticas--\n--Codigo--\t--Titulo--\t--Autor--\t--Puntuacion--\n");
			printf(" %s\t%s\t%s\t%d\n",codCritic,tituloCritic,autor,puntuacion);
		}
	}
        if(!erro) EXEC SQL COMMIT;
        
        buscarCritica();     */  
}

void buscarXogoCodigo()
{
	/*int erro = 0;		
	EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0);
	
	printf("Función buscarXogoCodigo().\n");
   	EXEC SQL BEGIN DECLARE SECTION;
      	char codXogo[26];
	char tituloXogo[51];
	time_t dataDeSaida;
	short dataDeSaida_ind;
        int votosPositivos;
        int votosNegativos;
        int notaMedia;
	EXEC SQL END DECLARE SECTION;

	EXEC SQL SET TRANSACTION READ ONLY;	

	printf("Introduzca o código do xogo[0 para sair]: ");
   	get_string(codXogo,25);

	//Control de salida
	if (strcmp(codXogo,'0') != 0)
		return;

	EXEC SQL SELECT codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,(SELECT AVG(puntuacion) FROM criticas WHERE xogo=codXogo) 
		INTO :codXogo,:tituloXogo,:dataDeSaida:dataDeSaida_ind,:votosPositivos,:votosNegativos,:notaMedia;
                FROM xogo 
		WHERE codXogo=:codXogo;

	

	if(sqlca.sqlcode == 1403)	
		printf("No se encontró el código indicado.\n");
	else
                printf("--Xogos--\n--Codigo--\t--Titulo--\t--Data de saida--\t--Votos Positivos--\t--Votos Negativos--\t--Nota Media--\n");
                if(dataDeSaida_ind == 0)
                        printf(" %s\t%s\t%f\t%d\t%d\t%d\n",codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,notaMedia);
                else
                        printf(" %d\t%s\tSen data\t%d\t%d\t%d\n",codXogo,tituloXogo,votosPositivos,votosNegativos,notaMedia);	
        if(!erro) EXEC SQL COMMIT;
        
        listarCriticas(0,codXogo);*/

}

void buscarXogoTitulo()
{
	/*int erro = 0;		
	EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0);
	
	printf("Función buscarXogoCodigo().\n");
   	EXEC SQL BEGIN DECLARE SECTION;
      	char codXogo[26];
		char tituloXogo[51];
		time_t dataDeSaida;
		short dataDeSaida_ind;
        int votosPositivos;
        int votosNegativos;
        int notaMedia;
	EXEC SQL END DECLARE SECTION;

	EXEC SQL SET TRANSACTION READ ONLY;	

	printf("Introduzca o titulo do xogo: ");
   	get_string(codXogo,25);

	EXEC SQL SELECT codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,(SELECT AVG(puntuacion) FROM criticas WHERE xogo=codXogo) 
		INTO :codXogo,:tituloXogo,:dataDeSaida:dataDeSaida_ind,:votosPositivos,:votosNegativos,:notaMedia;
                FROM xogo 
		WHERE tituloXogo=:tituloXogo;

	

	if(sqlca.sqlcode == 1403)	
		printf("No se encontró el titulo indicado.\n");
	else
                printf("--Xogos--\n--Codigo--\t--Titulo--\t--Data de saida--\t--Votos Positivos--\t--Votos Negativos--\t--Nota Media--\n");
                if(dataDeSaida_ind == 0)
                        printf(" %s\t%s\t%f\t%d\t%d\t%d\n",codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,notaMedia);
                else
                        printf(" %d\t%s\tSen data\t%d\t%d\t%d\n",codXogo,tituloXogo,votosPositivos,votosNegativos,notaMedia);	
        if(!erro) EXEC SQL COMMIT;
        
        listarCriticas(0,codXogo);*/

}

void buscarAutor()
{
	/*int erro = 0;		
	EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0);
	
	printf("Función buscarXogoCodigo().\n");
   	EXEC SQL BEGIN DECLARE SECTION;
      	char idAutor[26];
		char nome[51];
		char enlace[257];
		short enlace_ind;
        char tipo[31];
	EXEC SQL END DECLARE SECTION;

	EXEC SQL SET TRANSACTION READ ONLY;	

	printf("Introduzca o titulo do xogo: ");
   	get_string(codXogo,25);

	EXEC SQL SELECT codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,(SELECT AVG(puntuacion) FROM criticas WHERE xogo=codXogo) 
		INTO :codXogo,:tituloXogo,:dataDeSaida:dataDeSaida_ind,:votosPositivos,:votosNegativos,:notaMedia;
                FROM xogo 
		WHERE tituloXogo=:tituloXogo;

	

	if(sqlca.sqlcode == 1403)	
		printf("No se encontró el titulo indicado.\n");
	else
                printf("--Xogos--\n--Codigo--\t--Titulo--\t--Data de saida--\t--Votos Positivos--\t--Votos Negativos--\t--Nota Media--\n");
                if(dataDeSaida_ind == 0)
                        printf(" %s\t%s\t%f\t%d\t%d\t%d\n",codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,notaMedia);
                else
                        printf(" %d\t%s\tSen data\t%d\t%d\t%d\n",codXogo,tituloXogo,votosPositivos,votosNegativos,notaMedia);	
        if(!erro) EXEC SQL COMMIT;
        
        listarCriticas(1,idAutor);
*/
}


void listarXogos()
{
/*	int erro = 0;		
	EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0);
	
	printf("Función listarXogos().\n");
   	EXEC SQL BEGIN DECLARE SECTION;
      	char codXogo[26];
	char tituloXogo[51];
	time_t dataDeSaida;
	short dataDeSaida_ind;
        int votosPositivos;
        int votosNegativos;
        int notaMedia;
	EXEC SQL END DECLARE SECTION;

	EXEC SQL SET TRANSACTION READ ONLY;	

	EXEC SQL DECLARE cursor_elementos CURSOR FOR
		SELECT codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,(SELECT AVG(puntuacion) FROM criticas WHERE xogo=codXogo) 
		FROM xogo;
	
	EXEC SQL OPEN cursor_elementos;	
	EXEC SQL WHENEVER NOT FOUND DO BREAK;

	while(1) {
		EXEC SQL FETCH cursor_elementos
		INTO :codXogo,:tituloXogo,:dataDeSaida:dataDeSaida_ind,:votosPositivos,:votosNegativos,:notaMedia;
		if(sqlca.sqlcode == 1403)	
			printf("Non hai xogos.\n");
		else
                        printf("--Xogos--\n--Codigo--\t--Titulo--\t--Data de saida--\t--Votos Positivos--\t--Votos Negativos--\t--Nota Media--\n");
			if(dataDeSaida_ind == 0)
				printf(" %s\t%s\t%f\t%d\t%d\t%d\n",codXogo,tituloXogo,dataDeSaida,votosPositivos,votosNegativos,notaMedia);
			else
				printf(" %d\t%s\tSen data\t%d\t%d\t%d\n",codXogo,tituloXogo,votosPositivos,votosNegativos,notaMedia);
	}
	EXEC SQL WHENEVER NOT FOUND CONTINUE;
	printf("Xogos atopados: %d.\n", sqlca.sqlerrd[2]);
	EXEC SQL CLOSE cursor_elementos;

	if(!erro) EXEC SQL COMMIT;
	
	buscarXogoCodigo();
*/
}


void mostrar_votos(int codXogo){
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
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "set transaction READ ONLY";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )310;
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
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select tituloXogo , votosPositivos , votosNegativos INTO :b\
0 , :b1 , :b2 FROM xogo WHERE codXogo = :b3 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )325;
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
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )356;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		
}

void votar_positivamente()
{
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int codXogo,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 

	
	//EXEC SQL SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;

	printf("VOTAR POSITIVAMENTE\n\n");
	printf("Código do xogo> "); 
	codXogo = get_int();

	/* EXEC SQL UPDATE xogo
		SET votosPositivos = votosPositivos + 1
		WHERE codXogo = :codXogo; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update xogo SET votosPositivos = votosPositivos + 1 WHERE c\
odXogo = :b0 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )371;
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
 if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}



	if(!erro){
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )390;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}


		mostrar_votos(codXogo);
		printf("\n\nGracias por votar!\n\n\n");	
	}
	pausa = get_int();
}


void votar_negativamente()
{
	int erro = 0;		
	/* EXEC SQL WHENEVER SQLERROR DO erro=errorManager_DML(0); */ 

	
   	/* EXEC SQL BEGIN DECLARE SECTION; */ 

      		int codXogo,pausa;
	/* EXEC SQL END DECLARE SECTION; */ 

	
	//EXEC SQL SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;

	printf("VOTAR NEGATIVAMENTE\n\n");
	printf("Código do xogo> "); 
	codXogo = get_int();

	/* EXEC SQL UPDATE xogo
		SET votosNegativos = votosNegativos + 1
		WHERE codXogo = :codXogo; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update xogo SET votosNegativos = votosNegativos + 1 WHERE c\
odXogo = :b0 ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )405;
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
 if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}



	if(!erro){
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )424;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (erro=errorManager_DML(0));
}


		mostrar_votos(codXogo);
		printf("\n\nGracias por votar!\n\n\n");	
	}

	pausa = get_int();
}


/* Función principal */
int main()
{
  conecta_bd();

  int op;

  while ( (op=menu()) != 0){
       switch(op){
            case 1: listarXogos(); break;
            case 2: buscarXogoTitulo(); break;
            case 3: buscarAutor(); break;
	    case 4: engadir_critica(); break;
	    case 5: engadir_autor(); break;
	    case 6: engadir_xogo(); break;
	    case 7: eliminar_xogo(); break;
	    case 8: eliminar_autor(); break;
	    case 10: votar_positivamente(); break;
	    case 11: votar_negativamente(); break;
       }

  }
 


 desconecta_bd(); 

 return 0;
}



