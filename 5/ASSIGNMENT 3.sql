use employeeincentive;


create table employee(
employee_id int,
first_name varchar(20),
last_name varchar(20),
salary int,
joining_date datetime,
department varchar(20),
primary key(employee_id)
);

drop table employee;

insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(1,'john','abraham',1000000,'2013-01-01 12:00:00','banking');
insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(2,'michael','clarke',800000,'2013-01-01 12:00:00','insurance');
insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(3,'roy','tomas',700000,'2013-02-01 12:00:00','banking');
insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(4,'tom','jose',600000,'2013-02-01 12:00:00','insurance');
insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(5,'jerry','pinto',6500000,'2013-02-01 12:00:00','insurance');
insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(6,'philip','mathew',750000,'2013-01-01 12:00:00','services');
insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(7,'testname1','123',650000,'2013-01-01 12:00:00','services');
insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(8,'testname2','lname%',600000,'2013-02-01 12:00:00','insurance');
insert into employee(employee_id,first_name,last_name,salary,joining_date,department) values(9,'jems','bond',900000,'2013-02-01 12:00:00','services');


create table incentive(
employee_ref_id int,
incentive_date datetime,
incentive_amount int,
foreign key(employee_ref_id) references employee(employee_id)
);

drop table incentive;

insert into incentive(employee_ref_id,incentive_date,incentive_amount) values(1,'2013-02-01',5000);
insert into incentive(employee_ref_id,incentive_date,incentive_amount) values(2,'2013-02-01',4000);
insert into incentive(employee_ref_id,incentive_date,incentive_amount) values(3,'2013-02-01',3000);
insert into incentive(employee_ref_id,incentive_date,incentive_amount) values(1,'2013-01-01',4500);
insert into incentive(employee_ref_id,incentive_date,incentive_amount) values(2,'2013-01-01',3500);


-- (a) 

select first_name from employee where first_name='tom';

-- (b)

select first_name,joining_date,salary from employee ;

-- (c)

select * from employee order by first_name,salary desc;

-- (d)

select * from employee where first_name like 'j%';

-- (e)

select * from employee order by salary;

-- (f)

Select employee.first_name,incentive.incentive_amount from employee join incentive 
on employee.employee_id=incentive.employee_ref_id where incentive_amount>3000;

-- (g)

create table employee_backup
(
employee_id int,
first_name varchar(20),
last_name varchar(20),
salary int,
joining_date datetime,
department varchar(20)
);

-- trigger

insert into employee_backup values
(new.employee_id,new.first_name,new.last_name,new.salary,new.joining_date,new.department);




























