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


DROP TABLE critica;
DROP TABLE autor;
DROP TABLE xogo;
DROP SEQUENCE Seq_Xogo;
DROP SEQUENCE Seq_Critic;


CREATE TABLE xogo (
	codXogo NUMBER(4),
	tituloXogo VARCHAR(50) NOT NULL,
	dataDeSaida DATE,
	votosPositivos NUMBER(3),
	votosNegativos NUMBER(3),
	CONSTRAINT xogo_pk PRIMARY KEY(codXogo)
);


CREATE SEQUENCE Seq_Xogo
MINVALUE 1
INCREMENT BY 1
START WITH 1
NOMAXVALUE;


CREATE OR REPLACE TRIGGER Trigger_Xogo
BEFORE INSERT ON xogo
REFERENCING NEW AS NEW FOR EACH ROW
DECLARE valorSecuencia NUMBER := 0;
BEGIN
	SELECT Seq_Xogo.NEXTVAL INTO valorSecuencia from DUAL;
	:NEW.codXogo := valorSecuencia;
END;
/


CREATE TABLE autor (
	idAutor VARCHAR(25),
	nome VARCHAR(50) NOT NULL,
	enlace VARCHAR(256),
	tipo VARCHAR(30) NOT NULL,
	CONSTRAINT autor_pk PRIMARY KEY (idAutor)
);


CREATE TABLE critica (
	codCritic NUMBER(4),
	tituloCritic VARCHAR(50) NOT NULL,
	data DATE NOT NULL,
	puntuacion NUMBER(3) NOT NULL,
	descricion VARCHAR(500),
	xogo NUMBER(4) NOT NULL,
	autor VARCHAR(25) NOT NULL,
	CONSTRAINT crit_pk PRIMARY KEY (codCritic),
	CONSTRAINT crit_xogo_fk FOREIGN KEY (xogo) 
	REFERENCES xogo(codXogo) ON DELETE CASCADE,
	CONSTRAINT crit_autor_fk FOREIGN KEY (autor) 
	REFERENCES autor(idAutor) ON DELETE CASCADE,
	CONSTRAINT puntuacion_ck CHECK (puntuacion BETWEEN 1 AND 100)
);


CREATE SEQUENCE Seq_Critic
MINVALUE 1
INCREMENT BY 1
START WITH 1
NOMAXVALUE;


CREATE OR REPLACE TRIGGER Trigger_Critica
BEFORE INSERT ON critica
REFERENCING NEW AS NEW FOR EACH ROW
DECLARE valorSecuencia NUMBER := 0;
BEGIN
	SELECT Seq_Critic.NEXTVAL INTO valorSecuencia from DUAL;
	:NEW.codCritic := valorSecuencia;
END;
/
