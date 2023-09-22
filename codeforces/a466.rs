use std::{cmp, io};

fn read_line_of_i64(length: usize) -> Vec<i64> {
    let mut input_line = String::new();
    io::stdin()
        .read_line(&mut input_line)
        .expect("Failed to read line");
    let mut vec_numbers: Vec<i64> = Vec::<i64>::with_capacity(length);
    let parts = input_line.split(" ");
    for part in parts {
        let number: i64 = part.trim().parse().expect("Input not an i64");
        vec_numbers.push(number);
    }
    vec_numbers
}

fn main() {
    let input = read_line_of_i64(4);
    let n: i64 = input[0];
    let m: i64 = input[1];
    let a: i64 = input[2];
    let b: i64 = input[3];
    let multi_ride_total_price: i64 = (((n as f64) / (m as f64)).ceil() as i64) * b;
    let one_ride_total_price: i64 = n * a;
    let hyprid_total_price: i64 = ((n / m) * b) + ((n % m) * a);
    println!(
        "{}",
        cmp::min(
            cmp::min(multi_ride_total_price, one_ride_total_price),
            hyprid_total_price
        )
    );
}
