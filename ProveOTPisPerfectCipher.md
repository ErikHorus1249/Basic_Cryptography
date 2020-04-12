![](https://i.imgur.com/0fEID77.jpg)
###  Chứng minh hệ mã [one-time-pad(OTP) ](https://en.wikipedia.org/wiki/One-time_pad)là hệ mã có độ mật hoàn thiện ?( [How to prove OTP is perfect cipher ?]((https://crypto.stackexchange.com/questions/39331/clarification-of-proof-proving-perfect-secrecy-for-one-time-pads)))
**OTP** :
![](https://i.imgur.com/RhsTDxX.png)
    
### Định lý của [Shannon](https://vi.wikipedia.org/wiki/Claude_Shannon) về hệ mật có độ mật hoàn thiện (perfect ciphers):
#### [Độ mật hoàn thiện](https://secgroup.dais.unive.it/teaching/cryptography/shannon-theory-on-perfect-ciphers/)  (perfect cipher) : 
- **Định lý 1** : Một hệ mật có độ mật hoàn thiện nếu pP(x|y)= pP(x) với mọi x thuộc P, y thuộc C. Tức xác suất hậu nghiệm để thông điệp là x với điều kiện đã thu được bản mã y là đồng nhất với xác suất tiên nghiệm để thông điệp là x.
- **Định lý 2** : Giả sử (P, C, K, E, D) là một hệ mật, trong đó |K|=|C|=|P|. Khi đó, hệ mật có độ mật hoàn thiện khi và chỉ khi khoá K được dùng với xác suất như nhau bằng 1/|K|, với mỗi x thuộc P, mỗi y thuộc  C có một khoá duy nhất K sao cho eK(x)=y


### Chứng minh [OTP](https://en.wikipedia.org/wiki/One-time_pad) là perfect cipher
![](https://i.imgur.com/anh3bc7.png)
- Định lý [Bayes](https://vi.wikipedia.org/wiki/%C4%90%E1%BB%8Bnh_l%C3%BD_Bayes) : ![](https://i.imgur.com/jFB7fXb.png)

``` P(x|y) = P(x)*P(y)/P(y)```**(1)**
- Đối với các mã hóa **OTP** là phép cộng **modulo 2 (XOR)** của thông điệp và khóa cho nên mỗi một khóa **k** thuộc **K** và **x** thuộc **P**(plaintext) ta có một mã **y** thuộc **C**(ciphertext) 

	=> Xác suất hậu nghiệm của mã **y** chắc chắn phải do một **k** duy nhất quyết định mà **k** được lấy một cách ngẫu nhiên trong tâp **K** 

	=> ta suy ra : ```P(y) = 1/|K|``` **(2)**
	
Từ **(1)** và **(2)** ta có : ```P(x|y) = P(x) * (1/|K|) / (1/|K|) = P(x)```

=> ```P(x|y) = P(x)``` => hệ mã **OTP** là hệ mã **hoàn thiện**.

![](https://i.imgur.com/LXqDVwj.jpg)
**=> DONE** 
##### Credit: 
- [author](https://github.com/ErikHorus1249)
- reference :
	- [stackExchange](https://crypto.stackexchange.com/questions/39331/clarification-of-proof-proving-perfect-secrecy-for-one-time-pads)
	- [stackExchange](https://crypto.stackexchange.com/questions/3896/simply-put-what-does-perfect-secrecy-mean)
	- [Giáo trình mật mã học cơ sở thầy Đỗ Xuân Chợ PTIT]()






