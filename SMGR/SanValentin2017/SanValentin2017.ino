/*******************************************************************************************/
/*  CÓDIGO POR MIGUEL ÁNGEL ADORNA RUIZ, CON CARIÑO, PARA SERGIO MANUEL GONZÁLEZ ROMÁN.    */
/*  POR FAVOR NO MODIFIQUES ESTE CÓDIGO, PUEDES DAÑAR LA TARJETA ARDUINO SI NO MODIFICAS   */
/*  ESTO CORECTAMENTE. GRACIAS POR LEER.                                                   */
/*  EL PROYECTO COMIENZA EL DOMINGO 29 DE ENERO DE 2017.                                   */
/*  EL PROYECTO TERMINA EL LUNES 13 DE FEBRERO DE 2017.                                    */
/*******************************************************************************************/


/*******************************************************************************************/
/*  CODE BY MIGUEL ÁNGEL ADORNA RUIZ, WITH LOVE, TO SERGIO MANUEL GONZÁLEZ ROMÁN.          */
/*  PLEASE DO NOT MODIFY THIS CODE, YOU CAN DAMAGE THE ARDUINO BOARD IF YOU DON'T MODIFY   */
/*  THIS PROPERTLY. THANK YOU FOR READING.                                                 */
/*  PROYECT STARTS AT SUNDAY, 29th JANUARY, 2017.                                          */
/*  PROYECT ENDS AT MONDAY, 13rd FEBRUARY, 2017.                                           */
/*******************************************************************************************/


#include <UTFT.h> //esta librería hay que ponerla en C:\Program Files (x86)\Arduino\libraries
#include <avr/pgmspace.h> //librería incluida con el IDE Arduino
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];
#define LCD_BL  2
UTFT myGLCD(ITDB18SP,4,3,7,6,5);
int led[3] = {9,10,11}; //LEDs en pines 9, 10 y 11
int i,j;
int repeat = 10;
int tonePin = A0; //zumbador en pin A0

void setup(){ //esto es configuración, simplemente se ejecuta una vez
   for(i=0; i<3; i++) 
  pinMode(led[i], OUTPUT);
  pinMode(LCD_BL,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,OUTPUT);
  //como sólo se ejecuta una vez, aprovecho esto para que cierta parte de código no se repita
  myGLCD.InitLCD(); //inicializa la pantalla lcd
  myGLCD.clrScr();  //limpia la pantalla lcd
  digitalWrite(LCD_BL,HIGH); //enciende la pantalla lcd
  delay(500); //espera 500 ms
  myGLCD.setFont(BigFont); //establece el tamaño de las letras como tamaño grande
  myGLCD.setColor(233,84,32); // color letra en R G B
  myGLCD.print("En el",0,40); //esto establece texto en una posición variable en la pantalla
  myGLCD.print("pasado...",0,70);
  midi(); //se ejecutan los estamentos de midi(){}
  myGLCD.clrScr();
  myGLCD.setFont(BigFont);
  myGLCD.print("Pero",0,40);
  myGLCD.print("ahora...",0,70);
  delay(2000); //espera 2 segundos
  myGLCD.clrScr();
  myGLCD.print("Todo ha",15,56);
  delay(2000);
  myGLCD.clrScr();
  myGLCD.print("cambiado.",10,56);
  delay(2000);
  myGLCD.clrScr();
  delay(500);
  }
void loop()
{
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW); //se inicia con los LEDs apagados
  myGLCD.clrScr();//limpia la pamtalla
  myGLCD.setFont(BigFont);
  myGLCD.setColor(233,84,32);//R G B
  myGLCD.print("13/01/2017",0,56); //nuestra fecha :)
  delay(2000);
  myGLCD.clrScr();
  myGLCD.print("SMGRxMAAR",5,56); //me encanta esto <3
  delay(2000);
  myGLCD.clrScr();
  myGLCD.print("Te amo",25,56); //y lo seguiría haciendo toda mi vida.
  delay(2000);
  myGLCD.clrScr();
  myGLCD.print("-",60,56);
  delay(1000);
  myGLCD.print("-",65,56);
  delay(1000);
  myGLCD.print(">",70,56); //crea la flecha
  delay(1000);
  for(i=0; i<256; i++){ // establece el valor máximo como 256
      analogWrite(led[0],i);
      analogWrite(led[1],i);
      analogWrite(led[2],i);
      delay(5); //sube el brillo de los LEDs cada 5ms
  }
  myGLCD.clrScr(); //limpia la pantalla
  myGLCD.print("<3",60,56); //corazón, eso que tú sanaste en mí
  delay(1000);
  for(i=255; i>-1; i--){ // empieza a bajar desde 255
      analogWrite(led[0],i);
      analogWrite(led[1],i);
      analogWrite(led[2],i);
      delay(5); //baja el brillo cada 5ms
  }
  
  
}

void midi() { //esta es la canción que se usa en setup(){}

    tone(tonePin, 293, 187.5); //tono en el zumbador durante "x" tiempo
    delay(208.333333333); //silencio
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 184, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 375.0);
    delay(416.666666667);
    tone(tonePin, 184, 375.0);
    delay(416.666666667);
    tone(tonePin, 164, 375.0);
    delay(416.666666667);
    tone(tonePin, 184, 375.0);
    delay(416.666666667);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 184, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 375.0);
    delay(416.666666667);
    tone(tonePin, 195, 375.0);
    delay(416.666666667);
    tone(tonePin, 184, 375.0);
    delay(416.666666667);
    tone(tonePin, 220, 375.0);
    delay(416.666666667);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 375.0);
    delay(416.666666667);
    tone(tonePin, 293, 375.0);
    delay(416.666666667);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 375.0);
    delay(416.666666667);
    delay(208.333333333);
    tone(tonePin, 329, 375.0);
    delay(416.666666667);
    delay(416.666666667);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 562.5);
    delay(625.0);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    delay(416.666666667);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    delay(416.666666667);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    delay(416.666666667);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    delay(1250.0);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 375.0);
    delay(416.666666667);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    delay(833.333333333);
    tone(tonePin, 110, 375.0);
    delay(416.666666667);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    delay(1041.66666667);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    delay(833.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    delay(833.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 375.0);
    delay(416.666666667);
    delay(833.333333333);
    tone(tonePin, 220, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    delay(416.666666667);
    tone(tonePin, 440, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 293, 375.0);
    delay(416.666666667);
    tone(tonePin, 246, 375.0);
    delay(416.666666667);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    delay(416.666666667);
    tone(tonePin, 440, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 293, 375.0);
    delay(416.666666667);
    tone(tonePin, 246, 375.0);
    delay(416.666666667);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 391, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    delay(416.666666667);
    tone(tonePin, 440, 187.5);
    delay(208.333333333);
    tone(tonePin, 277, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 329, 187.5);
    delay(208.333333333);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    delay(1666.66666667);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    tone(tonePin, 293, 187.5);
    delay(208.333333333);
    tone(tonePin, 246, 187.5);
    delay(208.333333333);
    tone(tonePin, 369, 187.5);
    delay(208.333333333);
    delay(833.333333333);
    tone(tonePin, 391, 249.938964844);
    delay(277.709960938);
    tone(tonePin, 391, 249.938964844);
    delay(277.709960938);
    tone(tonePin, 391, 249.938964844);
    delay(277.709960938);
    tone(tonePin, 391, 249.938964844);
    delay(277.709960938);
    tone(tonePin, 369, 249.938964844);
    delay(277.709960938);
    tone(tonePin, 329, 249.938964844);
    delay(277.709960938);
    tone(tonePin, 293, 375.0);
    delay(416.666666667);

}
