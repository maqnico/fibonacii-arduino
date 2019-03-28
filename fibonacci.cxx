#define SMALL 250
#define BIG 1000
int fibA = 0;
int fibB = 1;
counter1 = 0;

void setup(){
    pinMode(13, OUTPUT);
}

void loop(){
    int counter2 = 0;
    counter = fibonacci(fibA, fibB);
    for(int i= 0, i < counter, i = i +1){
        blink();
    }
    delay(BIG);
    counter1 = counter1 + 1;
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
    fibA = a;
    fibB = b;
    fibonacci(b,a)
}
