# Media
Multimedia Learning

一 、simplest_mediadata 音视频数据处理工程，包括如下内容
   1 RGB、YUV像素数据处理
   2 PCM音频采样数据处理
   3 H.264视频码流解析
   4 AAC音频码流解析
   5 FLV封装格式解析
   6 UDP-RTP协议解析


二、simplest_librtmp_example 即LibRTMP库的使用工程，包括如下内容
   1 simplest_librtmp_receive: 接收RTMP流媒体并在本地保存成FLV格式的文件。
   2 simplest_librtmp_send_flv: 将FLV格式的视音频文件使用RTMP推送至RTMP流媒体服务器。
   3 simplest_librtmp_send_h264: 将内存中的H.264数据推送至RTMP流媒体服务器


三、srs目录为RTMP流媒体服务器工程

RTMP流媒体服务器srs的部署

第一步，获取SRS。详细参考GIT获取代码

git clone https://github.com/ossrs/srs
cd srs/trunk
或者使用git更新已有代码：

git pull

第二步，编译SRS

./configure --prefix=/usr/local/srs --with-ssl --with-hls --with-hds --with-dvr --with-nginx --with-http-callback --with-http-server --with-stream-caster --with-http-api --with-ffmpeg --with-transcode --with-ingest --with-stat --with-librtmp --with-research --with-utest --with-gperf --with-gprof
make
sudo make install

第三步，编写SRS配置文件。

将以下内容保存为文件，譬如conf/rtmp.conf，服务器启动时指定该配置文件(srs的conf文件夹有该文件)。

# conf/rtmp.conf
listen              1935;
max_connections     1000;
vhost __defaultVhost__ {
}

第四步，启动SRS。

./objs/srs -c conf/rtmp.conf

第五步，启动推流编码器。

使用FFMPEG命令推流：

    for((;;)); do \
        ./objs/ffmpeg/bin/ffmpeg -re -i ./doc/source.200kbps.768x320.flv \
        -vcodec copy -acodec copy \
        -f flv -y rtmp://127.0.0.1/live/livestream; \
        sleep 1; \
    done

第六步，观看RTMP流。
  
RTMP流地址为：rtmp://127.0.0.1/live/livestream

可以使用VLC观看。



四、simplest_rtp_h264_example工程
     实现linux平台下通过RTP实时发送H264碼流，通过播放器mpv Media Player可以实时观看推送过来的H264碼流


五、AVMediaCodecMP4工程
      Android平台Camera采集预览nv21格式数据，AudioRecord采集音频pcm数据，使用MediaCodec分别进行h264和AAC硬编码，通过MediaMuxer合成MP4
