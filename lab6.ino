#define BUZZER 19
#define BUTTON 0
#define LED 18
hw_timer_t *My_timer = NULL;

double Dd = 1000000/(2*1175) , Ed = 1000000/(2*1760) , Fd = 1000000/(2*1397) , Gd = 1000000/(2*1568) , Ad = 1000000/(2*440.0) ,
       Bd = 1000000/(2*1976) , Cd = 1000000/(2*1047) , As = 1000000/(2*1865), Cs = 1000000/(2*1109) , Ds = 1000000/(2*1245),
       Fs = 1000000/(2*1480), Gs = 1000000/(2*1661), Es = 1000000/(2*1358),stop = 1000000;
double Speed;
int i=3;

// This is the Timer ISR. It is automatically called 
// on As timer alarm event.
void IRAM_ATTR onTimer(){
  digitalWrite(BUZZER, !digitalRead(BUZZER));
}

void IRAM_ATTR onButton(){
  digitalWrite(LED, !digitalRead(LED));
  i = i+1;
  if(i==1) Speed = 2.5;
  else if(i==2) Speed = 2;
  else if(i==3) Speed = 1;
  else if(i==4) Speed = 0.75;
  else if(i==5) Speed = 0.5;
  else if(i>5) {
    i=1;
    Speed = 2.5;
  }
}

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  My_timer = timerBegin(0, 80, true);  // use timer 0 and set prescale to 80 so 1 tick is 1 uSec
  timerAttachInterrupt(My_timer, &onTimer, true); // point to the ISR
  // timerAlarmWrite(My_timer, 16.35 , true);  // set alarm every 1 sec
  // timerAlarmEnable(My_timer);  // enable the alarm
  //timerAttachInterrupt(My_timer, &onButton, true); // point to the ISR
  attachInterrupt(BUTTON, &onButton,RISING);
}

void loop() {

  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Gs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 750);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs, true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Es , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 375);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Gs , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 750);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Es , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Gs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Es , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Es , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Gs , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Gs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Gs , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Gs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Fs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Es , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, Es , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 500);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, As , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 1500);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Cs , true);
  delay(Speed * 250);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  Serial.println(i);

  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 50);
  timerAlarmWrite(My_timer, Ds , true);
  delay(Speed * 125);
  timerAlarmWrite(My_timer, stop , true);
  delay(Speed * 125);
  Serial.println(i);

  timerAlarmEnable(My_timer);  // enable the alarm
}