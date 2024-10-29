class Trapezium extends Quadrilateral  {
    double length, breath, height;

    public Trapezium(int a, int b, int h) {
        length = a;
        breath = b;
        height = h;
    }

    public double area() {
        return ((length + breath) * height) / 2;
    }

    public void shapeName() {
        System.out.println("Trapezium");
    }
}
