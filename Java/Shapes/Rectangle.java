class Rectangle extends Quadrilateral {
    double length, breath;

    public Rectangle(double a, double b) {
        length = a;
        breath = b;
    }

    public double area() {
        return length * breath;
    }

    public void shapeName() {
        System.out.println("Rectangle");
    }
}
