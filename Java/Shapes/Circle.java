class Circle implements Shape {
    double radius;

    public Circle(int r) {
        radius = r;
    }

    public double area() {
        return 3.14 * radius * radius;
    }
  
    public double numberOfSides() {
        return 0;
    }
  
    public void shapeName() {
        System.err.println("Circle");
    }
}
