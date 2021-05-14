## 仅适用于LINUX环境
- 主要参考 https://blog.csdn.net/liuheng0111/article/details/52490923
- 感谢大佬
- 文件内容
  - sourceTar 里面包含了我下载下的blas和cblas的源码压缩包,这个是官网的位置
  - http://www.netlib.org/blas/
  - 下载下的blas和cblas的源码压缩包
  - cblas.h && cblas_f77.h 使用cblas所需的头文件
  - cblas_LINUX.a 编译好的cblas静态链接库文件
  - blas_LINUX.a  编译好的blas静态链接库文件
  - example.c 随便写的运行函数
- 测试用命令
```shell
gcc -c example.c
gfortran -o example example.o cblas_LINUX.a blas_LINUX.a
./example

输出应该是:
14.00   8.00
41.00   26.00
68.00   44.00
67.00   46.00
```
### 待解决
大佬可以用g++ main.cpp cblas_LINUX.a blas_LINUX.a -o main 
编译直接编译,但是我不行
目前不是很不清楚