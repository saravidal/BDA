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
REFERENCES autor(idAutor) ON DELETE CASCADE
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



--RELLENO
/* 
INSERT ALL
        INTO empresa (cif,nome,pais) VALUES (000A,'2K BOSTON','EEUU')
        INTO empresa (cif,nome,pais) VALUES (001A,'2K MARIN','EEUU')
	INTO empresa (cif,nome,pais) VALUES (002A,'NINTENDO','JAPON')
	INTO empresa (cif,nome,pais) VALUES (003A,'HITMAKER','JAPON')
	INTO empresa (cif,nome,pais) VALUES (004A,'CAPCOM','JAPON')
	INTO empresa (cif,nome,pais) VALUES (005A,'NWAY','EEUU')
	INTO empresa (cif,nome,pais) VALUES (006A,'NAMCO BANDAI','JAPON')
	INTO empresa (cif,nome,pais) VALUES (007A,'KONAMI','JAPON')
	INTO empresa (cif,nome,pais) VALUES (008A,'WESTWOOD STUDIOS','EEUU')
	INTO empresa (cif,nome,pais) VALUES (009A,'GAMETEK','EEUU')
	INTO empresa (cif,nome,pais) VALUES (010A,'SIERRA','EEUU')
	INTO empresa (cif,nome,pais) VALUES (011A,'BRODERBUND','CANADA')
	INTO empresa (cif,nome,pais) VALUES (012A,'VOLITION','CANADA')
	INTO empresa (cif,nome,pais) VALUES (013A,'TOTALLY GAMES','EEUU')
	INTO empresa (cif,nome,pais) VALUES (014A,'CREATIVE ASSEMBLY','UK')
	INTO empresa (cif,nome,pais) VALUES (015A,'CD Projeckt','POLONIA')
	INTO empresa (cif,nome,pais) VALUES (016A,'BEESQUARE','ESPAÑA')
	INTO empresa (cif,nome,pais) VALUES (017A,'PYRO STUDIOS','ESPAÑA')
	INTO empresa (cif,nome,pais) VALUES (018A,'UBISOFT','FRANCIA')
	INTO empresa (cif,nome,pais) VALUES (019A,'GSC GAME WORLD','UKRANIA')
	INTO empresa (cif,nome,pais) VALUES (020A,'PARADOX','ESTOCOLMO')
	INTO empresa (cif,nome,pais) VALUES (021A,'CRYTEK','ALEMANIA')
	INTO empresa (cif,nome,pais) VALUES (022A,'IRRATIONAL GAMES','EEUU')
SELECT 1 FROM ´dual´;

INSERT ALL
	INTO xogos (codigo,titulo,data de saida,metacritic,pegi,cif) VALUES (000,'BioShock',NULL,90,000A)
	INTO xogos (codigo,titulo,data de saida,metacritic,pegi,cif) VALUES(001,'BioShock 2',NULL,85,001A)
	INTO xogos (codigo,titulo,data de saida,metacritic,pegi,cif) VALUES(002,'BioShock Infinite',NULL,85,022A)
SELECT 1 FROM ´dual´;

INSERT ALL
        INTO autor (dni,nome,data de nacemento,pais,cif) VALUES (0000A,'Sara','10-SEP-1996','ESPAÑA',016A)
        INTO autor (dni,nome,data de nacemento,pais,cif) VALUES (0001A,'Daniel','10-SEP-1994','ESPAÑA',NULL)
SELECT 1 FROM ´dual´;

INSERT ALL
	INTO desenvolvemento (codigo,dni) VALUES (000,0000A)
        INTO desenvolvemento (codigo,dni) VALUES (001,0000A)
        INTO desenvolvemento (codigo,dni) VALUES (002,0001A)

SELECT 1 FROM ´dual´;

 */
