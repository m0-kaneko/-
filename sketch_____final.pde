 int armAngle = 0;
int angleChange = 1;
final int ANGLE_LIMIT = 90;


void setup()
{
size(1300,1000,P3D);
}
void draw()
{
  float angle = atan2(mouseY - 500, mouseX - 500);

background(0);
lights();
 armAngle += angleChange;
 if (armAngle > ANGLE_LIMIT || armAngle < 0)
  {
    angleChange = -angleChange;
    armAngle += angleChange;
  }
  if (mousePressed){
    if (mouseButton == RIGHT){
  angleChange = 0;
}
  else{
    angleChange=1;
  }
  }

pushMatrix();
translate(500, 700,0);
fill(230,230,0);
box(300,100,100);
popMatrix();

pushMatrix();
translate(325, 600,0);
fill(127,0,0);
rotateZ(-0.5);
box(30,120,30);
popMatrix();

pushMatrix();
translate(350, 800,50);
fill(230,230,0);
box(50,120,50);
popMatrix();

pushMatrix();
translate(350, 800,-50);
box(50,120,50);
popMatrix();

pushMatrix();
translate(650, 800,50);
box(50,120,50);
popMatrix();

pushMatrix();
translate(650, 800,-50);
box(50,120,50);
popMatrix();


pushMatrix();
translate(625, 680,0);
fill(125);
rotateZ(radians(armAngle));
box(80);

translate(0, -175,0);
fill(230,230,0);
box(50,500,50);
 
translate(0,-250,0);
fill(125);
rotateZ(radians(armAngle)*0.4);
box(70,20,70);

translate(0,-40,0);
fill(230,230,0);
rotateY(angle);
box(60);
noStroke();

translate(50,10,0);
box(100,40,40);

translate(-60,-20,30);
fill(0,255,0);
sphere(10);

translate(0,0,-60);
fill(0,255,0);
sphere(10);

popMatrix();
}
