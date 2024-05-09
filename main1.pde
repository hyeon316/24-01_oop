Char1 main;
kim[] items1 = new kim[4];
Char1[] items2 = new Char1[4];

void setup() {
  size(700, 700);
  main = new Char1(random(width), random(height), 50);
for (int i = 0; i < 4; i++) {
  if (i == 0) {
    items1[i] = new kim(random(width), random(height), 10);
  } else if (i == 1) {
    items1[i] = new kBlue(random(width), random(height), 10);
  } else {
    items1[i] = new kGreen(random(width), random(height), 10);
  }
}
  for (int i = 0; i < 4; i++) {
  if (i == 0) {
    items2[i] = new Char1(random(width), random(height), 50);
  } else if (i == 1) {
    items2[i] = new CBlue(random(width), random(height), 50);
  } else {
    items2[i] = new CGreen(random(width), random(height), 50);
  }
}
       
  
  
  

}

void draw() {
  int sec = second();
  int min = minute();
  int hour = hour();
  background(135, 200, 250);
  backG();
  int count = millis() / 1000;
  fill(255);
  textSize(20);
  text("Time: " + count, 10, 20);
  if (count == 5) {
    text("10 point", mouseX + 20, mouseY - 10);
  } else if (count == 10) {
    text("20 point", mouseX + 20, mouseY - 10);
  } else if (count == 15) {
    text("30 point", mouseX + 20, mouseY - 10);
  } else if (count == 20) {
    text("30 point", mouseX + 20, mouseY - 10);
  } else if (count == 25) {
    text("50 point", mouseX + 20, mouseY - 10);
  } else if (count == 30) {
    text("Max(60) point", mouseX + 20, mouseY - 10);
    textSize(200);
    text("clear", 150, 350);
    delay(500);
    stop();
  }
  main.x = mouseX;
  main.y = mouseY;
  main.drawc();

  for (int i = 0; i < 4; i++) {
    items1[i].drawk(); 
    items1[i].kout(); 
  }
  
  for (int i = 0; i < 4; i++) {
    items2[i].drawc();
    items2[i].move();
  for (int j = 0; j < 4; j++) { 
    if (i != j && dist(items2[i].x, items2[i].y, items2[j].x, items2[j].y) <20 ) {
      float vxsave = items2[i].vx;
      float vysave = items2[i].vy;
      items2[i].vx = items2[j].vx;
      items2[i].vy = items2[j].vy;
      items2[j].vx = vxsave;
      items2[j].vy = vysave;
    }
  }    
  for (int j = 0; j < 4; j++) {
    if (dist(items2[i].x, items2[i].y, items1[j].x, items1[j].y) < 50) {
      float vxsave = items2[i].vx;
      float vysave = items2[i].vy;
      items2[i].vx = items1[j].vx;
      items2[i].vy = items1[j].vy;
      items1[j].vx = vxsave;
      items1[j].vy = vysave;
      }
    }
  }
  
  textSize(20);
  text(hour+"h"+ min + "m" + sec+"s", 600, 20);
  text("PRESS ESC to EXIT", 20, 690);

  for (int i = 0; i < 4; i++) {
    if (dist(mouseX, mouseY, items1[i].x, items1[i].y) < 50) {
      delay(1000);
      exit();
    }
  }
  for (int i = 0; i < 4; i++) {
    if (dist(mouseX, mouseY, items2[i].x, items2[i].y) < 30) {
      delay(1000);
      exit();
    }
  }
}

void keyPressed() {
  if (key == ESC) {
    exit();
  }
}

void backG(){
  fill(100,160,0);
  stroke(100,160,0);
  rect(0,550,700,700);
  fill(120,70,0);
  stroke(120,70,0);
  rect(0,570,700,700);
}
