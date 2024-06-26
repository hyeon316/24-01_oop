class Char1 {
  float x, y; 
  float size; 
  float vy, vx; 
  color bodyColor; 
  color eyeColor; 

  Char1() {
    x = random(width);
    y = random(height);
    size = random(10, 20);
    vy = random(4, 5);
    vx = random(4, 5);
    bodyColor = color(251, 206, 177);
    eyeColor = color(0);
  }

  Char1(float a, float b, float c) {
    x = a;
    y = b;
    size = c;
    vy = random(4, 5);
    vx = random(4, 5);
    bodyColor = color(251, 206, 177);
    eyeColor = color(0);
  }

  void move() {
    x += vx;
    y += vy;
    if (x > height || x < 0) vx = -vx;
    if (y > height || y < 0) vy = -vy;
  }

  void drawc() {
    drawBody();
    drawEyes();
    drawMouth();
  }

  void drawBody() {
    fill(bodyColor);
    ellipse(x, y, size, size);
  }

  void drawEyes() {
    fill(eyeColor);
    float eyeSize = size * 0.2;
    ellipse(x - size * 0.3, y - size * 0.2, eyeSize, eyeSize);
    ellipse(x + size * 0.3, y - size * 0.2, eyeSize, eyeSize);
  }

  void drawMouth() {
    noFill();
    stroke(0);
    strokeWeight(size * 0.05);
    arc(x, y + size * 0.1, size * 0.5, size * 0.3, 0, PI);
  }
}
class CBlue extends Char1 {
  CBlue(float a, float b, float c) {
    super(a, b, c);
    bodyColor = color(0, 0, 255); 
  }
}

class CGreen extends Char1 {
  CGreen(float a, float b, float c) {
    super(a, b, c);
    bodyColor = color(0, 255, 0);
  }
  void drawc() {
    super.drawc(); 
    float yy = y + 30;
    float dxy = 10;
    fill(255,0,0);
    triangle(x, yy, x - dxy, yy + dxy, x - dxy, yy - dxy);
    triangle(x, yy, x + dxy, yy + dxy, x + dxy, yy - dxy);
  }
  
}
