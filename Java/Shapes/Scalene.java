class Scalene extends Triangle {
    double side1, side2, side3;

    public Scalene(int a, int b, int c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    public double area() {
        return side1 * side2 * side3;
    }

    public void shapeName() {
        System.out.println("Scalene Triangle");
    }
}
