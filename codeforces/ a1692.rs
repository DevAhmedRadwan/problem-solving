use std::io;

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
    let length = read_line_of_i64(1)[0] as usize;
    for _ in 0..length {
        let mut count = 0;
        let distance_vec = read_line_of_i64(4);
        for distance in &distance_vec[1..4] {
            if distance_vec[0] < *distance {
                count += 1;
            }
        }
        println!("{}", count);
    }
}
