class kim {
  kim(){
    x = random(width);
    y = random(height);
    d = random(5,5);
    vy = random(4,5);
    vx = random(4,5);
    bodyColor = color(251, 206, 177); 
  }
  kim(float a, float b, float c){
    x = a;
    y = b;
    d = c;
    vy = random(4,5);
    vx = random(4,5);
    bodyColor = color(251, 206, 177);
  }
  
  float x,y,d, vy,vx;
  color bodyColor; 
  
  void kout(){
    x += vx;
    y += vy;
    if (x>height || x<0) vx = -vx;
    if (y>height || y<0) vy= -vy;
  }
  
  void drawk(){
 
    fill(bodyColor);
    circle(x,y,d*10);
    
 
    float eye_x= x-3*d;
    float eye_y = y-d;
    
    stroke(0,0,0);
    line(eye_x,eye_y,eye_x+2*d,eye_y-2*d);
    line(eye_x+2*d,eye_y,eye_x,eye_y-2*d);
 
    line(eye_x+4*d,eye_y,eye_x+6*d,eye_y-2*d);
    line(eye_x+6*d,eye_y,eye_x+4*d,eye_y-2*d);
    

    float mouth_x=x;
    float mouth_y=y+2*d;
    
    fill(128,128,128);
    circle(mouth_x,mouth_y,d*2);
  }
}

class kBlue extends kim {
  kBlue(float a, float b, float c) {
    super(a, b, c);
    bodyColor = color(0, 0, 255); 
  }
}
class kGreen extends kim {
  kGreen(float a, float b, float c) {
    super(a, b, c);
    bodyColor = color(0, 255, 0); 
  }
   void drawk() {
    super.drawk(); 
    float yy = y + 50;
    float dxy = d*2;
    fill(255,0,0);
    triangle(x, yy, x - dxy, yy + dxy, x - dxy, yy - dxy);
    triangle(x, yy, x + dxy, yy + dxy, x + dxy, yy - dxy);
  }
}
