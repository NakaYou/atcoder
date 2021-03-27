package main

import "fmt"

func main() {
	var H, W, X, Y int
	cnt := 0
	fmt.Scan(&H)
	fmt.Scan(&W)
	fmt.Scan(&X)
	fmt.Scan(&Y)
	X--
	Y--
	S := make([]string, H)
	for i := 0; i < H; i++ {
		fmt.Scan(&S[i])
	}
	Stmp := S[X]

	//右
	for i := 0; Y+i < W; i++{
		if Stmp[Y+i:Y+1+i] == "."{
			cnt++
		}else{
			break
		}
	}

	for i := -1; Y+i >= 0; i-- {
		if Stmp[Y+i:Y+1+i] == "."{
			cnt++
		}else{
			break
		}
	}
	//上
	for i := -1; X+i >=0; i--{
		Stmp = S[X+i]
		if Stmp[Y:Y+1] == "." {
			cnt++
		}else{
			break
		}
	} 
	//下
	for i := 1; X+i < H; i++ {
		Stmp = S[X+i]
		if Stmp[Y:Y+1] == "." {
			cnt++
		}else{
			break
		}
	} 
	fmt.Println(cnt)
}
