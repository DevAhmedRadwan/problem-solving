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
    let input = read_line_of_i64(2);
    let n: i64 = input[0];
    let m: i64 = input[1];
    if (cmp::min(n, m)) % 2 == 0 {
        println!("Malvika");
    } else {
        println!("Akshat");
    }
}
