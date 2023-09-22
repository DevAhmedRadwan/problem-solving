use std::io;

fn main() {
    let mut input = read_line_of_i32();
    let mut s: i32 = input[0];
    let n: usize = input[1] as usize;

    let mut dragons_vec: Vec<(i32, i32)> = Vec::<(i32, i32)>::with_capacity(n);

    for _ in 0..n {
        input = read_line_of_i32();
        let x: i32 = input[0];
        let y: i32 = input[1];
        dragons_vec.push((x, y));
    }

    dragons_vec.sort();

    let mut faild = false;

    for index in 0..n {
        if s > dragons_vec[index].0 {
            s += dragons_vec[index].1;
        } else {
            println!("NO");
            faild = true;
            break;
        }
    }
    if !faild {
        println!("YES");
    }
}

fn read_line_of_i32() -> Vec<i32> {
    let mut input_line = String::new();
    io::stdin()
        .read_line(&mut input_line)
        .expect("Failed to read line");
    let mut vec_numbers: Vec<i32> = Vec::<i32>::new();
    let parts = input_line.split(" ");
    for part in parts {
        let number: i32 = part.trim().parse().expect("Input not an i32");
        vec_numbers.push(number);
    }
    vec_numbers
}
