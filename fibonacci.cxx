#define SMALL 250
#define BIG 1000
int counter = 0

void setup(){
    pinMode(13, OUTPUT);
}

void loop(){
    for(int i= 0, i < fibonacci(counter), i = i +1){
        blink();
    }
    delay(BIG);
    counter = fibonacci(counter);
}

void blink(){
    digitalWrite(13, HIGH);
    delay(SMALL);
    digitalWrite(13, LOW);
    delay(SMALL);
}

int fibonacci (int a, int b){
    if(a > counter){
       break;
    }
    a = a + b
    fibonacci(b,a)
}