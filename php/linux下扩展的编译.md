先安装依赖包：yum install openssl openssl-devel

进入PHP安装包里的OpenSSL文件夹，根据个人的安装包位置不同，此处是

cd /home/local/php.5.6.25/ext/openssl/

phpize

可能会报错：Cannot find config.m4. 

Make sure that you run /usr/local/bin/phpize in the top level source directory of the module,

在当前目录下执行：mv config0.m4   config.m4  

重新phpize

./configure --with-php-config=/usr/local/php/bin/php-config(php-config文件的路径)

make

make install

将openssl.so复制到PHP扩展文件夹中

修改php.ini中 extesion=openssl.so