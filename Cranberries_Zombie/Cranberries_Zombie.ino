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
  
  playnote(speakerpin, A, eighth);
  playnote(speakerpin, G, beat2);
  playnote(speakerpin, G, eighth*.75);
  playnote(speakerpin, E, eighth);
  playnote(speakerpin, E, eighth*1.5);
  //-hangs low-ly; child-

  playnote(speakerpin, G, eighth);
  playnote(speakerpin, F, eighth);
  playnote(speakerpin, E, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, D, eighth);
  delay(eighth/4);

  playnote(speakerpin, D, eighth*1.5);
  //-is slow-ly tak-en.

  playnote(speakerpin, F, eighth);
  playnote(speakerpin, E, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, C, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, B3, beat2);
  delay(eighth*1.5);

  //And the vi-'lence caused-

  playnote(speakerpin, A/2, eighth);
  playnote(speakerpin, A, eighth);
  playnote(speakerpin, G, eighth);
  playnote(speakerpin, G, eighth);
  playnote(speakerpin, E, eighth*1.5);
  playnote(speakerpin, E, eighth);  
  //-such si-lence, who--

  playnote(speakerpin, G, eighth*1.5);
  playnote(speakerpin, F, eighth);
  playnote(speakerpin, E, eighth*1.5);
  playnote(speakerpin, E, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, F, eighth);  
  //-are we mis-tak-en?

  playnote(speakerpin, F, eighth);
  playnote(speakerpin, E, eighth*1.5);
  playnote(speakerpin, D, eighth*1.5);
  playnote(speakerpin, C, eighth*1.5);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, B3, eighth*1.5);
  delay(beat2);

  //But you see

  playnote(speakerpin, B, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, A, eighth);
  //it's not me

  playnote(speakerpin, A, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, A, eighth);
  //it's not my

  playnote(speakerpin, A, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, C5, eighth);
  //fam-i-ly

  playnote(speakerpin, A, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, C5, eighth);
  //In your head,

  playnote(speakerpin, C, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, G, eighth);
  playnote(speakerpin, E, eighth);
  //in your head

  playnote(speakerpin, C, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, G, eighth);
  //they are fighting

  playnote(speakerpin, C, eighth);
  playnote(speakerpin, C, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, B, beat2);
  delay(eighth/2);

  //with their tanks

  playnote(speakerpin, C, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, A, eighth);
  delay(eighth/5);

  //and their bombs

  playnote(speakerpin, A, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, A, eighth);
  delay(eighth/5);

  //and their bombs

  playnote(speakerpin, A, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, A, eighth);
  delay(eighth/5);

  //and their guns

  playnote(speakerpin, A, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, A, eighth);
  delay(eighth/5);

  //In you head

  playnote(speakerpin, C, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, G, eighth);
  playnote(speakerpin, E, eighth);
  //in your head

  playnote(speakerpin, C, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, G, eighth);
  //they are crying

  playnote(speakerpin, C, eighth);
  playnote(speakerpin, C, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, B, beat2);
  delay(eighth/2);

  //In your head

  playnote(speakerpin, B, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, C, eighth);  
  playnote(speakerpin, A, eighth);
  playnote(speakerpin, A, eighth);
  //in your head

  playnote(speakerpin, B, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, C, eighth);
  playnote(speakerpin, D, eighth);
  playnote(speakerpin, C, eighth);
  playnote(speakerpin, A, eighth);
  //zombie

  playnote(speakerpin, A, eighth);
  playnote(speakerpin, B, eighth);
  playnote(speakerpin, G, eighth);
}


//https://msu.edu/course/asc/232/song_project/dectalk_pages/note_to_%20ms.html

//https://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0150458
