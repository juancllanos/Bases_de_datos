-- Taller 6 --

-- Punto 1

-- Conjunto de entidades --

create table author
	(name varchar(20),
 	address varchar(20),
 	URL varchar(20),
	primary key (name));

create table publisher
	(name varchar(20),
	 address varchar(20),
	 phone numeric(10),
	 URL varchar(20),
	 primary key(name));

create table book
    (ISBN varchar(13),
	 title varchar(20),
	 year numeric(4)
	 price numeric(10),
	primary key (ISBN));

create table shopping_basket
	(basket_id numeric(20),
	 primary key (basket_id)
	);

create table warehouse
	(code varchar(10),
	 address varchar(20),
	 phone numeric(10),
	 primary key(code));
				 
create table customer
	(email varchar(20),
	 name varchar(20),
	 address varchar(20),
	 phone numeric(10),
	 primary key (email));

				  
-- Relaciones --

create table written_by                                                             -- autor & book 
	(ISBN numeric(13),
	name varchar (20),
	primary key (ISBN,name)
	foreign key (ISBN) references book
	foreign key (name) references autor);

create table published_by                                                           -- publisher & book 
	(ISBN varchar(13),
	 name varchar(20),
	 primary key(ISBN,name)
	foreign key (name) references publisher
	foreign key (ISBN) references book);
				 
create table contains                                                              --  shopping basket & book 
	(ISBN varchar(13),
	 basket_id numeric(20),
	 number numeric(10),
	 primary key(ISBN,basket_id)
	foreign key (ISBN) references book
	foreign key (basket_id) references shopping_basket);

create table stocks
	(ISBN varchar(13), 
	 code varchar(10),
	 number numeric(10),
	 primary key (ISBN,code)
	 foreign key (ISBN) references book
	 foreign key (code) references warehouse);

create table basket_of
	(basket_id varchar(20),
	 email varchar(20),
	 primary key (basket_id,email),
	 foreign key (email) references customer,
	 foreign key (basket_id) references shopping_basket);
