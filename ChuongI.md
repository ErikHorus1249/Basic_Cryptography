![](https://i.imgur.com/jn6pwh6.png)[ceasar cipher](https://en.wikipedia.org/wiki/Caesar_ciph)

## Chương I :  TỔNG QUAN VỀ MẬT MÃ HỌC

### 1. Thuật ngữ cơ bản:
- Sau đây là một vài **term** được sử dụng trong **Mật mã học** và chỉ mang tính chất tham khảo vì các **term** này có thể được dùng bởi những từ khác trong tài liệu nước ngoài.

	

 1. **sender**
 2. **receiver**
 3. **plaintext**
 4. **encryption**
 5. **criphertext**
 6. **decryption**
 7.  **Key**
 8. **. . .**
- Giả sử E là hàm mã hóa (encrypt), áp dụng trên P để tạo ra C, có biểu diễn toán học dạng:

    ```E(p) = C``` 
    
- Trong quy trình ngược lại, D là hàm giải mã (decrypt) áp dụng trên C để có P:

	```D(C) = P```

- Để đảm bảo quá trình từ mã hóa đến giải mã là đúng, cần đảm bảo:
	
	```D(E(P)) = P```
- Thuật toán và khóa
![](https://i.imgur.com/oLZWtDk.jpg)
- Thám mã : là ngành khoa học khôi phục lại thông điệp mà không cần biết khóa.
	 1. Tấn công khi chỉ biết bản mã (**ciphertext-only attack**) ;
	  
	 2. Tấn công đã biết thông điệp (**known-plaintext attack**):
	  
	 3. Tấn công chọn thông điệp rõ (**chosen plaintext attack**) ;
	 
	 4. Tấn công chọn thông điệp thích hợp (**adaptive-chosen-ciphertext attack**).


 


