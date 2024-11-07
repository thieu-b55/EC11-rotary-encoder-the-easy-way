/*
* MIT License
*
* Copyright (c) 2023 thieu-b55
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

/*
 * ATTINY45
 */


#define A_INPUT   1
#define B_INPUT   2
#define R_UIT     3
#define L_UIT     4
#define L_R_UIT   0

bool input_1_bool;
bool input_2_bool;
bool input_1_vorig_bool;
unsigned long begin_millis;

void setup() {
  pinMode(A_INPUT, INPUT);
  pinMode(B_INPUT, INPUT);
  pinMode(R_UIT, OUTPUT);
  pinMode(L_UIT, OUTPUT);
  pinMode(L_R_UIT, OUTPUT);
}

void loop() {
  input_1_bool = digitalRead(A_INPUT);
  input_2_bool = digitalRead(B_INPUT);
  delay(2);
  if(input_1_bool == digitalRead(A_INPUT)){
    if(input_1_bool != input_1_vorig_bool){
      if((!input_1_bool) && (!input_2_bool)){
        while(!digitalRead(A_INPUT)){
        }
        begin_millis = millis();
        digitalWrite(R_UIT, true);
        digitalWrite(L_R_UIT, true);
        while((millis() - begin_millis) < 10){
        }
        digitalWrite(L_R_UIT, false);
        while((millis() - begin_millis) < 20){
        }
        digitalWrite(R_UIT, false);
        while((millis() - begin_millis) < 38){
        }
      }
      if((!input_1_bool) && (input_2_bool)){
        while(!digitalRead(A_INPUT)){
        }
        begin_millis = millis();
        digitalWrite(L_UIT, true);
        digitalWrite(L_R_UIT, true);
        while((millis() - begin_millis) < 20){
        }
        digitalWrite(L_UIT, false);
        digitalWrite(L_R_UIT, false);
        while((millis() - begin_millis) < 38){
        }
      }
      input_1_vorig_bool = input_1_bool;
    }
  }
} 
     
  
  
  
