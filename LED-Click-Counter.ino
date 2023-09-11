//by else if :

int red = 9;
int yellow = 11; 
int green = 13; 
int reading =0;
int button = 5;
int counter = 0;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode (button , INPUT);
}

void loop()
{
 reading = digitalRead(button);
 if (reading == HIGH)
  {
    counter++; 
   if (counter==1)
     {
      digitalWrite(red , HIGH); 
     }
   else if (counter == 2)
     {
      digitalWrite(yellow , HIGH);
     }
   else if (counter == 3)
     {
      digitalWrite(green, HIGH);
     }
   else
     {
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
     
     counter = 0;
    
      }
   delay(500);
   }
}

//by switch :

/*int red = 9;
int yellow = 11; 
int green = 13;  
int reading =0;
int button = 5;
int counter = 0;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode (button , INPUT);
}

void loop()
{
  reading = digitalRead(button);
  if (reading == HIGH)
  {
    counter++; 

switch (counter)
{
case 1 :  digitalWrite(red , HIGH);
 break ;  
  
  case 2 :  digitalWrite(yellow , HIGH);
 break ;  

  case 3 :  digitalWrite(green, HIGH);
 break ;  

  default : 
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  counter = 0;
  
}

  delay (500);  
    
    }
}*/
