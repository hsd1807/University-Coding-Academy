class Equilateral extends Triangle {
    double side;

    public Equilateral(int a) {
        side = a;
    }

    public double area() {
        return (1.732 * side * side) / 4;
    }

    public void shapeName() {
        System.out.println("Equilateral Triangle");
    }
}
