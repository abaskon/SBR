


#define m_r_pwm 10
#define m_r_fwd 12
#define m_r_rwd 11
#define m_l_pwm 9
#define m_l_fwd 8
#define m_l_rwd 7

void setup() {
  // put your setup code here, to run once:

  pinMode(m_l_pwm,OUTPUT);
  pinMode(m_l_fwd,OUTPUT);
  pinMode(m_l_rwd,OUTPUT);
  pinMode(m_l_pwm,OUTPUT);
  pinMode(m_l_fwd,OUTPUT);
  pinMode(m_l_rwd,OUTPUT);

  Serial.begin(9600);

  digitalWrite(m_l_pwm, 255);
  digitalWrite(m_r_pwm, 255);

  digitalWrite(m_l_fwd,LOW);
  digitalWrite(m_l_rwd,LOW);
  digitalWrite(m_r_fwd,LOW);
  digitalWrite(m_r_rwd,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

int a=8000;
  digitalWrite(m_r_fwd,HIGH);
  digitalWrite(m_l_fwd,HIGH);
  delay(a);
  digitalWrite(m_r_fwd,LOW);
  digitalWrite(m_l_fwd,LOW);
  //delay(500);
   
  digitalWrite(m_r_rwd,HIGH);
  digitalWrite(m_l_rwd,HIGH);
  delay(a);
  digitalWrite(m_r_rwd,LOW);
  digitalWrite(m_l_rwd,LOW);


}
