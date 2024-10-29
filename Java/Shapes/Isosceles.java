class Isosceles extends Triangle {
    double side1, side2;

    public Isosceles(int a, int b) {
        side1 = a;
        side2 = b;
    }

    public double area() {
        return (side1 * side1) / 2;
    }

    public void shapeName() {
        System.out.println("Isosceles Triangle");
    }
}
