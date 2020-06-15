pipeline {
  agent any
  stages {
    stage('master') {
      parallel {
        stage('master') {
          steps {
            git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
          }
        }

        stage('dev') {
          steps {
            git 'https://github.com/cchaoaxp/SPOF.git'
          }
        }

      }
    }

    stage('Qt-Build') {
      steps {
        sh '''echo "where is $0"

./buildScript.sh'''
      }
    }

  }
}