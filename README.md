# 环境安装

## 切换gcc版本

```bash
scl enable devtoolset-11 bash
```

## 安装bazel

```bash
wget https://copr.fedorainfracloud.org/coprs/vbatts/bazel/repo/epel-7/vbatts-bazel-epel-7.repo --no-check-certificate

yum install bazel4 -y
```

brpc 依赖包安装
```bash
yum install epel-release git gcc-c++ make openssl-devel gflags-devel protobuf-devel protobuf-compiler leveldb-devel gperftools-devel gtest-devel  gflags-devel glog-devel lmdb-devel -y
```

运行
```bash
bazel run //:http_server
```

测试
```bash
curl http://127.0.0.1:8010/v1/queue/start

curl -d '{"userno":"b123"}' http://127.0.0.1:8010/v1/queue/stats/123
```

#  参考资料
[brpc 项目构建参考](https://juejin.cn/post/7069381454773354509)

[brpc install doc](https://github.com/apache/brpc/blob/master/docs/cn/getting_started.md#fedoracentos)