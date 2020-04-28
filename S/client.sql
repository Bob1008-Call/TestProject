-- MySQL dump 10.13  Distrib 5.5.34, for debian-linux-gnu (i686)
--
-- Host: localhost    Database: clientIMDB
-- ------------------------------------------------------
-- Server version	5.5.34-0ubuntu0.12.04.1

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `HistoryMessage`
--

DROP TABLE IF EXISTS `HistoryMessage`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `HistoryMessage` (
  `messageID` int(11) NOT NULL AUTO_INCREMENT,
  `senderID` varchar(15) NOT NULL,
  `receiverID` varchar(15) NOT NULL,
  `content` varchar(1000) NOT NULL DEFAULT '',
  `dateTime` datetime NOT NULL,
  PRIMARY KEY (`messageID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='utf8_general_ci';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `HistoryMessage`
--

LOCK TABLES `HistoryMessage` WRITE;
/*!40000 ALTER TABLE `HistoryMessage` DISABLE KEYS */;
/*!40000 ALTER TABLE `HistoryMessage` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `HistoryMessage2014050701`
--

DROP TABLE IF EXISTS `HistoryMessage2014050701`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `HistoryMessage2014050701` (
  `messageID` int(11) NOT NULL AUTO_INCREMENT,
  `senderID` varchar(15) NOT NULL,
  `receiverID` varchar(15) NOT NULL,
  `content` varchar(1000) NOT NULL DEFAULT '',
  `dateTime` datetime NOT NULL,
  PRIMARY KEY (`messageID`)
) ENGINE=InnoDB AUTO_INCREMENT=153 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `HistoryMessage2014050701`
--

LOCK TABLES `HistoryMessage2014050701` WRITE;
/*!40000 ALTER TABLE `HistoryMessage2014050701` DISABLE KEYS */;
INSERT INTO `HistoryMessage2014050701` VALUES (13,'2014050701','2014050702','hello','2014-05-21 17:01:29'),(14,'2014050702','2014050701','hi~girl','2014-05-21 17:01:35'),(15,'2014050701','2014050702','what do you like?','2014-05-21 17:01:40'),(16,'2014050702','2014050701','I like music and sport, and you?','2014-05-21 17:01:44'),(17,'2014050701','2014050702','sorry, my english is poor. could you speak chinese?','2014-05-21 17:01:49'),(18,'2014050702','2014050701','当然可以咯啊～','2014-05-21 17:01:54'),(19,'2014050701','2014050702','原来你会中文啊，着呢号，早说嘛','2014-05-21 17:01:59'),(20,'2014050702','2014050701','but,my chinese is also very poor; but, my spanish is good.','2014-05-21 17:02:03'),(21,'2014050701','2014050702','你没额米的。岁vian聊天好了','2014-05-21 17:02:07'),(22,'2014050702','2014050701','asdfasmei突然没子女过去了。这些子是彩色的。','2014-05-21 17:02:10'),(23,'2014050701','2014050702','下划线 + 粗体 + 斜体','2014-05-21 17:02:20'),(24,'2014050702','2014050701','下划线 ','2014-05-21 17:02:36'),(31,'2014050701','2014050702','hgjghjgh','2014-05-21 22:33:59'),(32,'2014050701','2014050702','ghjgh','2014-05-21 22:34:10'),(33,'2014050701','2014050702','sdfds','2014-05-21 22:35:20'),(34,'2014050701','2014050702','sdfdsfsd','2014-05-21 22:35:36'),(35,'2014050701','2014050702','dsfg','2014-05-21 23:07:01'),(36,'2014050701','2014050702','dsfgsdfgsd','2014-05-21 23:07:02'),(37,'2014050701','2014050702','sdfgdsf','2014-05-21 23:07:03'),(38,'2014050702','2014050701','sdfgsdf','2014-05-21 23:07:13'),(39,'2014050702','2014050701','dsfgdsf','2014-05-21 23:07:14'),(40,'2014050702','2014050701','dsfgdsf','2014-05-21 23:07:15'),(41,'2014050702','2014050701','sdfgdfs','2014-05-21 23:07:16'),(42,'2014050702','2014050701','1111111111','2014-05-21 23:16:16'),(43,'2014050702','2014050701','11111111111111','2014-05-21 23:16:19'),(44,'2014050701','2014050702','222222222222','2014-05-21 23:16:20'),(45,'2014050701','2014050702','333333333333','2014-05-21 23:16:22'),(46,'2014050702','2014050701','444444444444','2014-05-21 23:16:24'),(47,'2014050701','2014050702','555555555555','2014-05-21 23:16:26'),(48,'2014050702','2014050701','66666666666','2014-05-21 23:16:28'),(49,'2014050701','2014050702','csdsdfsdsdfsd','2014-05-22 00:30:47'),(50,'2014050701','2014050702','sdfsdfsd','2014-05-22 00:30:48'),(51,'2014050701','2014050702','asdfsda','2014-05-22 00:30:49'),(52,'2014050701','2014050702','asdfsd','2014-05-22 00:30:50'),(53,'2014050701','2014050702','sdafsad','2014-05-22 00:30:51'),(54,'2014050701','2014050702','sdfsda','2014-05-22 00:30:52'),(55,'2014050701','2014050702','dsfgds','2014-05-22 00:32:49'),(56,'2014050701','2014050702','qqqqqqq','2014-05-22 00:59:25'),(57,'2014050702','2014050701','tyuyt','2014-05-24 08:50:10'),(58,'2014050701','2014050703','asdfsad','2014-05-24 15:20:57'),(59,'2014050703','2014050701','sadfas','2014-05-24 15:21:00'),(60,'2014050701','2014050703','dfgfd','2014-05-24 15:21:50'),(61,'2014050702','2014050701','dsfds','2014-05-24 15:22:26'),(62,'2014050702','2014050701','sdfsd','2014-05-24 15:22:29'),(63,'2014050702','2014050701','fgfgf','2014-05-24 16:38:50'),(64,'2014050702','2014050701','fghg','2014-05-24 16:43:52'),(65,'2014050702','2014050701','gfhfg','2014-05-24 16:43:54'),(66,'2014050702','2014050701','gfhfg','2014-05-24 16:43:56'),(67,'2014050702','2014050701','fghfg','2014-05-24 16:43:57'),(68,'2014050701','2014050702','fghfg','2014-05-24 16:44:25'),(69,'2014050701','2014050702','hh','2014-05-24 16:44:32'),(70,'2014050701','2014050702','dfgdfgdf','2014-05-24 16:46:25'),(71,'2014050701','2014050702','dgdfgdf','2014-05-24 16:46:26'),(72,'2014050701','2014050702','dfgdfgdf','2014-05-24 16:46:27'),(73,'2014050702','2014050701','dfgdf','2014-05-24 16:46:34'),(74,'2014050702','2014050701','dfgdf','2014-05-24 16:46:35'),(75,'2014050702','2014050701','dfgdfdfgdf','2014-05-24 16:46:42'),(76,'2014050702','2014050701','sdfds','2014-05-24 16:47:10'),(77,'2014050702','2014050701','sdfds','2014-05-24 16:47:11'),(78,'2014050702','2014050701','sdfsd','2014-05-24 16:47:13'),(79,'2014050701','2014050702','dsfsd','2014-05-24 17:06:42'),(80,'2014050701','2014050702','sdfds','2014-05-24 17:06:45'),(81,'2014050702','2014050701','sdfsd','2014-05-24 17:06:52'),(82,'2014050701','2014050702','sdfds','2014-05-24 17:07:02'),(83,'2014050702','2014050701','sdfsd','2014-05-24 17:07:03'),(84,'2014050701','2014050702','sdfsd','2014-05-24 17:07:11'),(85,'2014050702','2014050701','dsfds','2014-05-24 17:07:15'),(86,'2014050701','2014050702','sdfsd','2014-05-24 17:07:16'),(87,'2014050701','2014050702','sdfsd','2014-05-24 17:07:18'),(88,'2014050701','2014050702','sdfds','2014-05-24 17:07:21'),(89,'2014050701','2014050702','sdfds','2014-05-24 17:07:25'),(90,'2014050701','2014050702','sdfsd','2014-05-24 17:07:26'),(91,'2014050701','2014050702','1','2014-05-24 17:07:29'),(92,'2014050701','2014050702','2','2014-05-24 17:07:30'),(93,'2014050701','2014050702','3','2014-05-24 17:07:33'),(94,'2014050701','2014050702','4','2014-05-24 17:07:34'),(95,'2014050701','2014050702','5','2014-05-24 17:07:35'),(96,'2014050702','2014050701','ghfg','2014-05-24 17:18:59'),(97,'2014050702','2014050701','gfhfg','2014-05-24 17:19:01'),(98,'2014050701','2014050702','dfds','2014-05-24 17:19:33'),(99,'2014050702','2014050701','dsfsdf','2014-05-24 17:20:29'),(100,'2014050702','2014050701','dsfsd','2014-05-24 17:23:18'),(101,'2014050702','2014050701','sdfds','2014-05-24 17:23:20'),(102,'2014050702','2014050701','sdfsd','2014-05-24 17:23:21'),(103,'2014050702','2014050701','sdfsd','2014-05-24 17:23:24'),(104,'2014050702','2014050701','fghfg','2014-05-24 17:25:57'),(105,'2014050702','2014050701','fghfg','2014-05-24 17:25:58'),(106,'2014050701','2014050702','gfhfg','2014-05-24 17:26:04'),(107,'2014050701','2014050702','fghfg','2014-05-24 17:26:05'),(108,'2014050702','2014050701','asdfsd','2014-05-24 20:18:13'),(109,'2014050702','2014050701','fsadfas','2014-05-24 20:18:22'),(110,'2014050702','2014050701','dsafs','2014-05-24 20:18:24'),(111,'2014050701','2014050702','asdfsd','2014-05-24 20:21:19'),(112,'2014050702','2014050701','sdfds','2014-05-24 20:23:01'),(113,'2014050702','2014050701','sdfsd','2014-05-24 20:23:03'),(114,'2014050702','2014050701','dsfds','2014-05-24 20:27:26'),(115,'2014050702','2014050701','sdfsd','2014-05-24 20:27:28'),(116,'2014050701','2014050702','ghg','2014-05-24 21:12:59'),(117,'2014050701','2014050702','rthyrt','2014-05-24 21:13:57'),(118,'2014050701','2014050702','rtyrt','2014-05-24 21:13:59'),(119,'2014050703','2014050701','sdfds','2014-05-24 21:14:28'),(120,'2014050701','2014050702','ghgf','2014-05-24 21:15:14'),(121,'2014050701','2014050702','ghjgh','2014-05-24 21:15:29'),(122,'2014050701','2014050702','hjkjh','2014-05-24 21:15:58'),(123,'2014050701','2014050702','dfgdf','2014-05-24 21:19:29'),(124,'2014050701','2014050703','sdfsd','2014-05-24 21:21:13'),(125,'2014050701','2014050703','sdfsd','2014-05-24 21:21:14'),(126,'2014050701','2014050703','fdgdf','2014-05-24 21:22:54'),(127,'2014050701','2014050703','dfgdf','2014-05-24 21:23:04'),(128,'2014050702','2014050701','dsfds','2014-05-24 22:09:20'),(129,'2014050702','2014050701','sdfsd','2014-05-24 22:11:33'),(130,'2014050702','2014050701','sdfsd','2014-05-24 22:11:35'),(131,'2014050703','2014050701','sdfds','2014-05-24 22:25:02'),(132,'2014050703','2014050701','sdfsd','2014-05-24 22:25:04'),(133,'2014050702','2014050701','sdfsdasfasdasdfasd','2014-05-24 22:25:59'),(134,'2014050702','2014050701','dfgdf','2014-05-24 22:31:08'),(135,'2014050702','2014050701','dfgdf','2014-05-24 22:31:10'),(136,'2014050703','2014050701','dfgdf','2014-05-24 22:31:11'),(137,'2014050703','2014050701','dfgdf','2014-05-24 22:31:12'),(138,'2014050701','2014050702','dfgdf','2014-05-24 22:31:30'),(139,'2014050701','2014050702','dfgdf','2014-05-24 22:31:31'),(140,'2014050701','2014050702','dfgd','2014-05-24 22:31:32'),(141,'2014050701','2014050702','dfgdf','2014-05-24 22:31:35'),(142,'2014050702','2014050701','fff','2014-05-24 22:32:28'),(143,'2014050702','2014050701','hgjgh','2014-05-24 22:33:17'),(144,'2014050701','2014050703','sdfds','2014-05-24 22:46:35'),(145,'2014050702','2014050701','sdfsd','2014-05-24 22:52:38'),(146,'2014050702','2014050701','sdfsdfs','2014-05-24 22:52:55'),(147,'2014050702','2014050701','sdfds','2014-05-24 22:52:59'),(148,'2014050701','2014050702','sdfsd','2014-05-24 23:00:32'),(149,'2014050701','2014050702','sdfds','2014-05-24 23:00:34'),(150,'2014050703','2014050701','sdfsda','2014-05-24 23:00:41'),(151,'2014050703','2014050701','sdfas','2014-05-24 23:00:42'),(152,'2014050701','2014050703','hh','2014-05-24 23:12:26');
/*!40000 ALTER TABLE `HistoryMessage2014050701` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `HistoryMessage2014050702`
--

DROP TABLE IF EXISTS `HistoryMessage2014050702`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `HistoryMessage2014050702` (
  `messageID` int(11) NOT NULL AUTO_INCREMENT,
  `senderID` varchar(15) NOT NULL,
  `receiverID` varchar(15) NOT NULL,
  `content` varchar(1000) NOT NULL DEFAULT '',
  `dateTime` datetime NOT NULL,
  PRIMARY KEY (`messageID`)
) ENGINE=InnoDB AUTO_INCREMENT=154 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `HistoryMessage2014050702`
--

LOCK TABLES `HistoryMessage2014050702` WRITE;
/*!40000 ALTER TABLE `HistoryMessage2014050702` DISABLE KEYS */;
INSERT INTO `HistoryMessage2014050702` VALUES (18,'2014050702','2014050703','m,.m,','2014-05-21 22:36:48'),(44,'2014050701','2014050702','qqqqqqq','2014-05-22 00:59:25'),(45,'2014050702','2014050701','tyuyt','2014-05-24 08:50:10'),(46,'2014050702','2014050701','dsfds','2014-05-24 15:22:26'),(47,'2014050702','2014050701','sdfsd','2014-05-24 15:22:29'),(48,'2014050702','2014050701','fgfgf','2014-05-24 16:38:50'),(49,'2014050702','2014050701','fghg','2014-05-24 16:43:52'),(50,'2014050702','2014050701','gfhfg','2014-05-24 16:43:54'),(51,'2014050702','2014050701','gfhfg','2014-05-24 16:43:56'),(52,'2014050702','2014050701','fghfg','2014-05-24 16:43:57'),(53,'2014050701','2014050702','fghfg','2014-05-24 16:44:25'),(54,'2014050701','2014050702','hh','2014-05-24 16:44:32'),(55,'2014050701','2014050702','dfgdfgdf','2014-05-24 16:46:25'),(56,'2014050701','2014050702','dgdfgdf','2014-05-24 16:46:26'),(57,'2014050701','2014050702','dfgdfgdf','2014-05-24 16:46:27'),(58,'2014050702','2014050701','dfgdf','2014-05-24 16:46:34'),(59,'2014050702','2014050701','dfgdf','2014-05-24 16:46:35'),(60,'2014050702','2014050701','dfgdfdfgdf','2014-05-24 16:46:42'),(61,'2014050702','2014050701','sdfds','2014-05-24 16:47:10'),(62,'2014050702','2014050701','sdfds','2014-05-24 16:47:11'),(63,'2014050702','2014050701','sdfsd','2014-05-24 16:47:13'),(64,'2014050701','2014050702','dsfsd','2014-05-24 17:06:42'),(65,'2014050701','2014050702','sdfds','2014-05-24 17:06:45'),(66,'2014050702','2014050701','sdfsd','2014-05-24 17:06:52'),(67,'2014050701','2014050702','sdfds','2014-05-24 17:07:02'),(68,'2014050702','2014050701','sdfsd','2014-05-24 17:07:03'),(69,'2014050701','2014050702','sdfsd','2014-05-24 17:07:11'),(70,'2014050702','2014050701','dsfds','2014-05-24 17:07:15'),(71,'2014050701','2014050702','sdfsd','2014-05-24 17:07:16'),(72,'2014050701','2014050702','sdfsd','2014-05-24 17:07:18'),(73,'2014050701','2014050702','sdfds','2014-05-24 17:07:21'),(74,'2014050701','2014050702','sdfds','2014-05-24 17:07:25'),(75,'2014050701','2014050702','sdfsd','2014-05-24 17:07:26'),(76,'2014050701','2014050702','1','2014-05-24 17:07:29'),(77,'2014050701','2014050702','2','2014-05-24 17:07:30'),(78,'2014050701','2014050702','3','2014-05-24 17:07:33'),(79,'2014050701','2014050702','4','2014-05-24 17:07:34'),(80,'2014050701','2014050702','5','2014-05-24 17:07:35'),(81,'2014050702','2014050701','ghfg','2014-05-24 17:18:59'),(82,'2014050702','2014050701','gfhfg','2014-05-24 17:19:01'),(83,'2014050701','2014050702','dfds','2014-05-24 17:19:33'),(84,'2014050702','2014050701','dsfsdf','2014-05-24 17:20:29'),(85,'2014050702','2014050701','dsfsd','2014-05-24 17:23:18'),(86,'2014050702','2014050701','sdfds','2014-05-24 17:23:20'),(87,'2014050702','2014050701','sdfsd','2014-05-24 17:23:21'),(88,'2014050702','2014050701','sdfsd','2014-05-24 17:23:24'),(89,'2014050702','2014050701','fghfg','2014-05-24 17:25:57'),(90,'2014050702','2014050701','fghfg','2014-05-24 17:25:58'),(91,'2014050701','2014050702','gfhfg','2014-05-24 17:26:04'),(92,'2014050701','2014050702','fghfg','2014-05-24 17:26:05'),(93,'2014050702','2014050701','asdfsd','2014-05-24 20:18:13'),(94,'2014050702','2014050701','fsadfas','2014-05-24 20:18:22'),(95,'2014050702','2014050701','dsafs','2014-05-24 20:18:24'),(96,'2014050701','2014050702','asdfsd','2014-05-24 20:21:19'),(97,'2014050702','2014050701','sdfds','2014-05-24 20:23:01'),(98,'2014050702','2014050701','sdfsd','2014-05-24 20:23:03'),(99,'2014050702','2014050701','dsfds','2014-05-24 20:27:26'),(100,'2014050702','2014050701','sdfsd','2014-05-24 20:27:28'),(101,'2014050701','2014050702','ghg','2014-05-24 21:12:59'),(102,'2014050701','2014050702','rthyrt','2014-05-24 21:13:57'),(103,'2014050701','2014050702','rtyrt','2014-05-24 21:13:59'),(104,'2014050703','2014050702','dsfds','2014-05-24 21:14:39'),(105,'2014050701','2014050702','ghgf','2014-05-24 21:15:14'),(106,'2014050701','2014050702','ghjgh','2014-05-24 21:15:29'),(107,'2014050703','2014050702','jj','2014-05-24 21:15:36'),(108,'2014050701','2014050702','hjkjh','2014-05-24 21:15:58'),(109,'2014050703','2014050702','hjkhj','2014-05-24 21:16:03'),(110,'2014050701','2014050702','dfgdf','2014-05-24 21:19:29'),(111,'2014050703','2014050702','dfgdf','2014-05-24 21:19:39'),(112,'2014050702','2014050703','sdfds','2014-05-24 21:21:03'),(113,'2014050702','2014050703','sdfds','2014-05-24 21:21:05'),(114,'2014050702','2014050703','dfgdf','2014-05-24 21:22:51'),(115,'2014050702','2014050703','dfgdf','2014-05-24 21:23:05'),(116,'2014050702','2014050703','dfgdf','2014-05-24 21:23:07'),(117,'2014050702','2014050703','sdfds','2014-05-24 21:54:41'),(118,'2014050702','2014050701','dsfds','2014-05-24 22:09:20'),(119,'2014050702','2014050701','sdfsd','2014-05-24 22:11:33'),(120,'2014050702','2014050701','sdfsd','2014-05-24 22:11:35'),(121,'2014050702','2014050701','sdfsdasfasdasdfasd','2014-05-24 22:25:59'),(122,'2014050702','2014050701','dfgdf','2014-05-24 22:31:08'),(123,'2014050702','2014050701','dfgdf','2014-05-24 22:31:10'),(124,'2014050702','2014050703','dfgdf','2014-05-24 22:31:17'),(125,'2014050701','2014050702','dfgdf','2014-05-24 22:31:30'),(126,'2014050701','2014050702','dfgdf','2014-05-24 22:31:31'),(127,'2014050701','2014050702','dfgd','2014-05-24 22:31:32'),(128,'2014050701','2014050702','dfgdf','2014-05-24 22:31:35'),(129,'2014050703','2014050702','dfgdf','2014-05-24 22:31:45'),(130,'2014050703','2014050702','dfgdf','2014-05-24 22:31:46'),(131,'2014050702','2014050703','dfd','2014-05-24 22:32:24'),(132,'2014050702','2014050701','fff','2014-05-24 22:32:28'),(133,'2014050702','2014050701','hgjgh','2014-05-24 22:33:17'),(134,'2014050702','2014050703','dfds','2014-05-24 22:46:40'),(135,'2014050702','2014050701','sdfsd','2014-05-24 22:52:38'),(136,'2014050702','2014050701','sdfsdfs','2014-05-24 22:52:55'),(137,'2014050702','2014050701','sdfds','2014-05-24 22:52:59'),(138,'2014050701','2014050702','sdfsd','2014-05-24 23:00:32'),(139,'2014050701','2014050702','sdfds','2014-05-24 23:00:34'),(140,'2014050703','2014050702','dfgdf','2014-05-24 23:03:10'),(141,'2014050702','2014050703','ggg','2014-05-24 23:12:15'),(142,'2014050703','2014050702','sdaf','2014-05-24 23:16:16'),(143,'2014050703','2014050702','asdfas','2014-05-24 23:16:17'),(144,'2014050703','2014050702','sdfasd','2014-05-24 23:16:21'),(145,'2014050702','2014050703','sadfas','2014-05-24 23:16:24'),(146,'2014050702','2014050703','sadfas','2014-05-24 23:16:27'),(147,'2014050702','2014050703','asdfas','2014-05-24 23:16:31'),(148,'2014050702','2014050703','asdfas','2014-05-24 23:16:32'),(149,'2014050703','2014050702','sdfds','2014-05-24 23:19:32'),(150,'2014050703','2014050702','sdfsd','2014-05-24 23:19:38'),(151,'2014050703','2014050702','dfgdf','2014-05-24 23:19:53'),(152,'2014050703','2014050702','dfgdf','2014-05-24 23:19:57'),(153,'2014050703','2014050702','dfgdf','2014-05-24 23:20:03');
/*!40000 ALTER TABLE `HistoryMessage2014050702` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `HistoryMessage2014050703`
--

DROP TABLE IF EXISTS `HistoryMessage2014050703`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `HistoryMessage2014050703` (
  `messageID` int(11) NOT NULL AUTO_INCREMENT,
  `senderID` varchar(15) NOT NULL,
  `receiverID` varchar(15) NOT NULL,
  `content` varchar(1000) NOT NULL DEFAULT '',
  `dateTime` datetime NOT NULL,
  PRIMARY KEY (`messageID`)
) ENGINE=InnoDB AUTO_INCREMENT=52 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `HistoryMessage2014050703`
--

LOCK TABLES `HistoryMessage2014050703` WRITE;
/*!40000 ALTER TABLE `HistoryMessage2014050703` DISABLE KEYS */;
INSERT INTO `HistoryMessage2014050703` VALUES (1,'2014050703','2014050701','fghfghfg','2014-05-21 23:21:05'),(2,'2014050703','2014050701','fghfg','2014-05-21 23:21:06'),(3,'2014050703','2014050701','dfgdfgdfdfgdfgdf','2014-05-21 23:22:45'),(4,'2014050703','2014050701','我    2014-05-21 23:21:05: ','2014-05-21 23:22:57'),(5,'2014050701','2014050703','asdfsad','2014-05-24 15:20:57'),(6,'2014050703','2014050701','sadfas','2014-05-24 15:21:00'),(7,'2014050701','2014050703','dfgfd','2014-05-24 15:21:50'),(8,'2014050703','2014050701','sdfds','2014-05-24 21:14:28'),(9,'2014050703','2014050702','dsfds','2014-05-24 21:14:39'),(10,'2014050703','2014050702','jj','2014-05-24 21:15:36'),(11,'2014050703','2014050702','hjkhj','2014-05-24 21:16:03'),(12,'2014050703','2014050702','dfgdf','2014-05-24 21:19:39'),(13,'2014050702','2014050703','sdfds','2014-05-24 21:21:03'),(14,'2014050702','2014050703','sdfds','2014-05-24 21:21:05'),(15,'2014050701','2014050703','sdfsd','2014-05-24 21:21:13'),(16,'2014050701','2014050703','sdfsd','2014-05-24 21:21:14'),(17,'2014050702','2014050703','dfgdf','2014-05-24 21:22:51'),(18,'2014050701','2014050703','fdgdf','2014-05-24 21:22:54'),(19,'2014050701','2014050703','dfgdf','2014-05-24 21:23:04'),(20,'2014050702','2014050703','dfgdf','2014-05-24 21:23:05'),(21,'2014050702','2014050703','dfgdf','2014-05-24 21:23:07'),(22,'2014050702','2014050703','sdfds','2014-05-24 21:54:41'),(23,'2014050703','2014050701','sdfds','2014-05-24 22:25:02'),(24,'2014050703','2014050701','sdfsd','2014-05-24 22:25:04'),(25,'2014050703','2014050701','dfgdf','2014-05-24 22:31:11'),(26,'2014050703','2014050701','dfgdf','2014-05-24 22:31:12'),(27,'2014050702','2014050703','dfgdf','2014-05-24 22:31:17'),(28,'2014050703','2014050702','dfgdf','2014-05-24 22:31:45'),(29,'2014050703','2014050702','dfgdf','2014-05-24 22:31:46'),(30,'2014050702','2014050703','dfd','2014-05-24 22:32:24'),(31,'2014050701','2014050703','sdfds','2014-05-24 22:46:35'),(32,'2014050702','2014050703','dfds','2014-05-24 22:46:40'),(33,'2014050703','2014050701','sdfsda','2014-05-24 23:00:41'),(34,'2014050703','2014050701','sdfas','2014-05-24 23:00:42'),(35,'2014050703','2014050702','dfgdf','2014-05-24 23:03:10'),(36,'2014050702','2014050703','ggg','2014-05-24 23:12:15'),(37,'2014050701','2014050703','hh','2014-05-24 23:12:26'),(38,'2014050703','2014050701','asdfasd','2014-05-24 23:16:10'),(39,'2014050703','2014050701','sdfas','2014-05-24 23:16:11'),(40,'2014050703','2014050702','sdaf','2014-05-24 23:16:16'),(41,'2014050703','2014050702','asdfas','2014-05-24 23:16:17'),(42,'2014050703','2014050702','sdfasd','2014-05-24 23:16:21'),(43,'2014050702','2014050703','sadfas','2014-05-24 23:16:24'),(44,'2014050702','2014050703','sadfas','2014-05-24 23:16:27'),(45,'2014050702','2014050703','asdfas','2014-05-24 23:16:31'),(46,'2014050702','2014050703','asdfas','2014-05-24 23:16:32'),(47,'2014050703','2014050702','sdfds','2014-05-24 23:19:32'),(48,'2014050703','2014050702','sdfsd','2014-05-24 23:19:38'),(49,'2014050703','2014050702','dfgdf','2014-05-24 23:19:53'),(50,'2014050703','2014050702','dfgdf','2014-05-24 23:19:57'),(51,'2014050703','2014050702','dfgdf','2014-05-24 23:20:03');
/*!40000 ALTER TABLE `HistoryMessage2014050703` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2014-05-26 10:24:12