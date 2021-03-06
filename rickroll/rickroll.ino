//This program plays "Never Gonna Give You Up"

int speakerpin = 12;
int buttonpin = 3;

/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/

  int C = 262;
  int D = 294;
  int E = 330;
  int F = 370; //is actually F#
  int G = 392;
  int A = 440;
  int B = 494;
  int eighth = 450;
  int quarter = eighth * 2;
  int half = quarter * 2;
  int whole = half * 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(speakerpin,OUTPUT); 
  pinMode(buttonpin,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(3) == LOW) //When button is pressed, plays following notes
   {


    //"We're no strangers to love, You know the rules and so do I"
    //E4
    tone(12, E);    // tone(outputPin,frequency)
    delay(quarter);       // delay(milliseconds) 
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(quarter);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(quarter);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(quarter);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(quarter);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(quarter);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    //next line: "A full commitment's what I'm thinking of, You wouldn't get this from any other guy"

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(100);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, B); //B4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    //next line: "I just wanna tell you how I'm feeling, Gotta make you understand"

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, B); //B4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, B); //B4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, B); //B4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    //next line: "Never gonna give you up, Never gonna let you down"

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, B); //B4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, B); //B4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    //next line: "Never gonna run around and desert you, Never gonna make you cry"

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, B); //B4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, B); //B4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    //next line: "Never gonna say goodbye, Never gonna tell a lie and hurt you"

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, E); //E4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, F); //F#4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, D); //D4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, A); //A4
    delay(500);
    noTone(12);
    delay(100);

    tone(12, G); //G4
    delay(500);
    noTone(12);
    delay(100);
    
  // END
  noTone(12); // stop playing

   }
}
