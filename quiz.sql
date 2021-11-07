create table quiz(type text, question text, options text, answer text);

insert into quiz values("sport", "Which one is correct team name in NBA?", '"New York Bulls","Los Angeles Kings","Golden State Warriros","Huston Rocket"',"Huston Rocket");
insert into quiz values("maths", "5! = ?", '"100","25", "120","15"',"120");
insert into quiz values("maths", "12 * 8 = ?", '"102","96","36","84"',"96");

select question, answer from quiz;
