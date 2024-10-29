class Parallelogram extends Quadrilateral {
    double base, height;

    public Parallelogram(int a, int b) {
        base = a;
        height = b;
    }

    public double area() {
        return base * height;
    }

    public void shapeName() {
        System.out.println("Parallelogram");
    }
}
