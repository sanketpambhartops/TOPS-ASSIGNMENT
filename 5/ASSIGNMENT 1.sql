create database exam;
use exam;
create table student(
rollno int,
name varchar(20),
branch varchar(20),
primary key(rollno)
);

create table exam(
rollno int,
s_code varchar(20),
marks int,
p_code varchar(20),
foreign key(rollno) references student(rollno)
);	

drop table exam;

insert into student(rollno,name,branch) values(1,'Jay','computer science');
insert into student(rollno,name,branch) values(2,'Suhani','computer science');
insert into student(rollno,name,branch) values(3,'Kriti','computer science');

update student set branch="Electronic and com" where rollno=2;
update student set branch="Electronic and com" where rollno=3;


insert into exam(rollno,s_code,marks,p_code) values(1,'CS11',50,'CS');
insert into exam(rollno,s_code,marks,p_code) values(1,'CS12',60,'CS');
insert into exam(rollno,s_code,marks,p_code) values(2,'EC101',66,'EC');
insert into exam(rollno,s_code,marks,p_code) values(2,'EC102',70,'EC');
insert into exam(rollno,s_code,marks,p_code) values(3,'EC101',45,'ES');
insert into exam(rollno,s_code,marks,p_code) values(3,'EC102',50,'ES');



