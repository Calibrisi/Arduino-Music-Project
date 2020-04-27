//This program plays the song Zombie by the Cranberries

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

int B3 = 247;
int C = 262; //All variables without any number after them octave 4
int D = 294;
int E = 330;
int F = 349;
int G = 392;
int A = 440;
int B = 494;
int C5 = 523;
int eighth = 450;
int beat2 = eighth * 2;
int beat3 = eighth * 3;
int beat6 = eighth * 6;


void setup() {
  // put your setup code here, to run once:
  pinMode(speakerpin,OUTPUT); 
  pinMode(buttonpin,INPUT_PULLUP);
}

void playnote(int pin, int note, int duration){
  tone(pin, note);
  delay(duration);
  noTone(pin);
  
}

void loop() {

  //If the button isn't pressed, don't do anything and return
  //Done because the block of code for the notes is too long to see in one page and could cause confusion about whether something is inside the conditional or not
  if(digitalRead(3) == HIGH) return;
  //Otherwise, play the notes
  
  //an-oth-er head-
  
  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(beat2);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(eighth*.75);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth*1.5);
  noTone(speakerpin);

  //-hangs low-ly; child-

  tone(speakerpin, G);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, F);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  delay(eighth/4);

  tone(speakerpin, D);
  delay(eighth*1.5);
  noTone(speakerpin);

  //-is slow-ly tak-en.

  tone(speakerpin, F);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B3);
  delay(beat2);
  noTone(speakerpin);

  delay(eighth*1.5);

  //And the vi-'lence caused-

  tone(speakerpin, A/2);
  delay(eighth);
  noTone(speakerpin);
  
  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth*1.5);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth);
  noTone(speakerpin);
  
  //-such si-lence, who--

  tone(speakerpin, G);
  delay(eighth*1.5);
  noTone(speakerpin);

  tone(speakerpin, F);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth*1.5);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, F);
  delay(eighth);
  noTone(speakerpin);
  
  //-are we mis-tak-en?

  tone(speakerpin, F);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth*1.5);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth*1.5);
  noTone(speakerpin);

  tone(speakerpin, C);
  delay(eighth*1.5);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B3);
  delay(eighth*1.5);
  noTone(speakerpin);

  delay(beat2);

  //But you see

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  //it's not me

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  //it's not my

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, C5);
  delay(eighth);
  noTone(speakerpin);

  //fam-i-ly

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, C5);
  delay(eighth);
  noTone(speakerpin);

  //In your head,

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth);
  noTone(speakerpin);

  //in your head

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(eighth);
  noTone(speakerpin);

  //they are fighting

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(beat2);
  noTone(speakerpin);

  delay(eighth/2);

  //with their tanks

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  delay(eighth/5);

  //and their bombs

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  delay(eighth/5);

  //and their bombs

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  delay(eighth/5);

  //and their guns

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  delay(eighth/5);

  //In you head

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, E);
  delay(eighth);
  noTone(speakerpin);

  //in your head

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(eighth);
  noTone(speakerpin);

  //they are crying

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(beat2);
  noTone(speakerpin);

  delay(eighth/2);

  //In your head

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);
  
  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  //in your head

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, D); 
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, C);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  //zombie

  tone(speakerpin, A);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, B);
  delay(eighth);
  noTone(speakerpin);

  tone(speakerpin, G);
  delay(eighth);
  noTone(speakerpin);
}


//https://msu.edu/course/asc/232/song_project/dectalk_pages/note_to_%20ms.html

//https://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0150458
